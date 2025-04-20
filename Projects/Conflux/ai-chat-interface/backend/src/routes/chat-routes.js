const express = require('express');
const { apiLimiter, apiKeyLimiter } = require('../middleware/rate-limiter');
const validateRequest = require('../middleware/request-validator');
const handleChatGPT = require('../handlers/chatgpt-handler');
const handleDeepSeek = require('../handlers/deepseek-handler');
const handlePerplexity = require('../handlers/perplexity-handler');

const router = express.Router();

router.post('/chat', apiLimiter, validateRequest, async (req, res) => {
  try {
    await Promise.all(req.body.apiKeys.map(({ key }) => 
      apiKeyLimiter.consume(key)
    ));
    
    const { message, apiKeys } = req.body;
    const responses = await Promise.all(
      apiKeys.map(async ({ provider, key }) => ({
        provider,
        content: await {
          chatgpt: () => handleChatGPT(key, message),
          deepseek: () => handleDeepSeek(key, message),
          perplexity: () => handlePerplexity(key, message)
        }[provider]().catch(err => `Error: ${err.message}`)
      }))
    );

    res.json({ responses });
  } catch (error) {
    error.statusCode === 429 
      ? res.status(429).json({ error: 'Rate limit exceeded' })
      : res.status(500).json({ error: error.message });
  }
});

module.exports = router;