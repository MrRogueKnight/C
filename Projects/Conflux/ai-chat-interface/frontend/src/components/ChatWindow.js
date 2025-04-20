import React from 'react';
import Message from './Message';

const ChatWindow = ({ messages }) => {
  return (
    <div className="chat-window">
      {messages.map((msg, i) => (
        <Message key={i} {...msg} />
      ))}
    </div>
  );
};

export default ChatWindow;