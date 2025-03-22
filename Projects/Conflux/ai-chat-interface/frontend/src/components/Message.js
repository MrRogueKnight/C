import React from 'react';

const Message = ({ sender, content, type, loading, streaming, error }) => {
  return (
    <div className={`message ${type} ${error ? 'error' : ''}`}>
      <strong>{sender}:</strong>
      {loading ? (
        <div className="loading-indicator">
          <div className="spinner"></div>
          Connecting...
        </div>
      ) : (
        <div className="content">
          {content}
          {streaming && <span className="stream-cursor">|</span>}
        </div>
      )}
      {error && <div className="error-message">{content}</div>}
    </div>
  );
};

export default Message;