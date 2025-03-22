const axios = require('axios');
const AI_CONFIG = require('../config/ai-config');

module.exports = async (key, message) => {
  try {
    const response = await axios.post(
      `${AI_CONFIG.deepseek.baseURL}${AI_CONFIG.deepseek.endpoints.chat}`,
      {
        model: "deepseek-chat",
        messages: [{ role: "user", content: message }],
        temperature: 0.7
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