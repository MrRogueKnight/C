import React from 'react';
import ApiKeyManager from './components/ApiKeyManager';
import ChatWindow from './components/ChatWindow';
import useChat from './hooks/useChat';
import useApiKeys from './hooks/useApiKeys';
import './App.css';

const App = () => {
  const { apiKeys, setApiKeys } = useApiKeys();
  const { messages, sendMessage, isStreaming } = useChat();
  const [messageInput, setMessageInput] = useState('');

  const handleSend = () => {
    sendMessage(messageInput, apiKeys);
    setMessageInput('');
  };

  return (
    <div className="chat-container">
      <ApiKeyManager apiKeys={apiKeys} setApiKeys={setApiKeys} />
      
      <ChatWindow messages={messages} />
      
      <div className="input-area">
        <input
          value={messageInput}
          onChange={e => setMessageInput(e.target.value)}
          placeholder="Type your message..."
          onKeyPress={e => e.key === 'Enter' && handleSend()}
          disabled={isStreaming}
        />
        <button onClick={handleSend} disabled={isStreaming}>
          {isStreaming ? 'Sending...' : 'Send'}
        </button>
      </div>
    </div>
  );
};

export default App;