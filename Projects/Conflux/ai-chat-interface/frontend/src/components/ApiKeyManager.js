import React, { useState } from 'react';

const ApiKeyManager = ({ apiKeys, setApiKeys }) => {
  const [input, setInput] = useState({ key: '', provider: 'chatgpt' });

  const handleAddKey = () => {
    if (input.key && input.provider) {
      setApiKeys([...apiKeys, input]);
      setInput({ key: '', provider: 'chatgpt' });
    }
  };

  return (
    <div className="api-key-manager">
      <select
        value={input.provider}
        onChange={e => setInput(p => ({ ...p, provider: e.target.value }))}
      >
        <option value="chatgpt">ChatGPT</option>
        <option value="deepseek">DeepSeek</option>
        <option value="perplexity">Perplexity</option>
      </select>
      <input
        type="password"
        value={input.key}
        onChange={e => setInput(p => ({ ...p, key: e.target.value }))}
        placeholder="API Key"
      />
      <button onClick={handleAddKey}>Add Key</button>
      <div className="key-list">
        {apiKeys.map((key, i) => (
          <div key={i} className="key-item">
            <span>{key.provider}</span>
            <button onClick={() => setApiKeys(apiKeys.filter((_, idx) => idx !== i))}>
              ×
            </button>
          </div>
        ))}
      </div>
    </div>
  );
};

export default ApiKeyManager;