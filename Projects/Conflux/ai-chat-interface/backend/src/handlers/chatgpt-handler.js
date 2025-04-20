const axios = require('axios');
const AI_CONFIG = require('../config/ai-config');

module.exports = async (key, message, res) => {
  try {
    const response = await axios.post(
     `${AI_CONFIG.chatgpt.baseURL}${AI_CONFIG.chatgpt.endpoints.chat}`
,
      {
        model: "gpt-3.5-turbo",
        messages: [{ role: "user", content: message }],
        stream: true
      },
      {
        headers: { Authorization: `Bearer ${key}` },
        responseType: 'stream'
      }
    );

    return new Promise((resolve) => {
      let fullContent = '';
      response.data.on('data', chunk => {
        const lines = chunk.toString().split('\n');
        lines.forEach(line => {
          if (line.startsWith('data: ')) {
            try {
              const data = JSON.parse(line.slice(6));
              if (data.choices[0].delta.content) {
                fullContent += data.choices[0].delta.content;
                res.write(`data: ${JSON.stringify({
                  provider: 'chatgpt',
                  content: fullContent,
                  done: false
                })}\n\n`);
              }
            } catch (e) {}
          }
        });
      });

      response.data.on('end', () => {
        res.write(`data: ${JSON.stringify({
          provider: 'chatgpt',
          content: fullContent,
          done: true
        })}\n\n`);
        resolve();
      });
    });
  } catch (error) {
    console.error('ChatGPT Error:', error);
    res.write(`data: ${JSON.stringify({
      provider: 'chatgpt',
      content: error.response?.data?.error?.message || error.message,
      done: true,
      error: true
    })}\n\n`);
  }
};