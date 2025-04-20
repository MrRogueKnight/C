const axios = require('axios');
const AI_CONFIG = require('../config/ai-config');

module.exports = async (key, message) => {
  try {
    const response = await axios.post(
      `${AI_CONFIG.perplexity.baseURL}${AI_CONFIG.perplexity.endpoints.chat}`,
      {
        model: "pplx-7b-chat",
        messages: [{ role: "user", content: message }],
        max_tokens: 1000
      },
      {
        headers: {
          Authorization: `Bearer ${key}`,
          "Content-Type": "application/json"
        }
      }
    );
    return response.data.choices[0].message.content;
  } catch (error) {
    return `Error: ${error.response?.data?.error?.message || error.message}`;
  }
};