import { useState, useEffect } from 'react';

const useApiKeys = () => {
  const [apiKeys, setApiKeys] = useState([]);

  useEffect(() => {
    const savedKeys = localStorage.getItem('aiChatApiKeys');
    if (savedKeys) setApiKeys(JSON.parse(savedKeys));
  }, []);

  useEffect(() => {
    localStorage.setItem('aiChatApiKeys', JSON.stringify(apiKeys));
  }, [apiKeys]);

  return { apiKeys, setApiKeys };
};

export default useApiKeys;