import { useState, useEffect } from 'react';

const useChat = () => {
  const [messages, setMessages] = useState([]);
  const [isStreaming, setIsStreaming] = useState(false);

  // Load/save message history
  useEffect(() => {
    const savedHistory = localStorage.getItem('aiChatHistory');
    if (savedHistory) setMessages(JSON.parse(savedHistory));
  }, []);

  useEffect(() => {
    localStorage.setItem('aiChatHistory', JSON.stringify(messages));
  }, [messages]);

  const sendMessage = async (message, apiKeys) => {
    if (!message || !apiKeys.length || isStreaming) return;

    // Add user message
    setMessages(prev => [...prev, {
      sender: 'You',
      content: message,
      type: 'user'
    }]);

    // Add loading placeholders
    setMessages(prev => [
      ...prev,
      ...apiKeys.map(({ provider }) => ({
        sender: provider.toUpperCase(),
        content: '',
        type: 'ai',
        loading: true,
        streaming: true
      }))
    ]);

    setIsStreaming(true);

    try {
      const eventSource = new EventSource(
        `http://localhost:3001/api/chat-stream?message=${encodeURIComponent(message)}&apiKeys=${encodeURIComponent(JSON.stringify(apiKeys))}`
      );

      eventSource.onmessage = (e) => {
        const data = JSON.parse(e.data);
        setMessages(prev => {
          const existingIndex = prev.findIndex(msg => 
            msg.sender === data.provider.toUpperCase() && msg.streaming
          );

          if (existingIndex === -1) return prev;

          return prev.map((msg, index) => {
            if (index === existingIndex) {
              return {
                ...msg,
                content: data.content,
                streaming: !data.done,
                loading: false
              };
            }
            return msg;
          });
        });
      };

      eventSource.onerror = () => {
        eventSource.close();
        setIsStreaming(false);
      };

    } catch (error) {
      console.error('API Error:', error);
      setIsStreaming(false);
    }
  };

  return { messages, sendMessage, isStreaming };
};

export default useChat;