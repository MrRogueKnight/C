module.exports = {
    chatgpt: {
      baseURL: 'https://api.openai.com/v1',
      endpoints: {
        chat: '/chat/completions'
      }
    },
    deepseek: {
      baseURL: 'https://api.deepseek.com/v1',
      endpoints: {
        chat: '/chat/completions'
      }
    },
    perplexity: {
      baseURL: 'https://api.perplexity.ai',
      endpoints: {
        chat: '/chat/completions'
      }
    }
  };