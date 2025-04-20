const rateLimit = require('express-rate-limit');
const { RateLimiterMemory } = require('rate-limiter-flexible');

// IP-based rate limiter (unchanged)
const apiLimiter = rateLimit({
  windowMs: 15 * 60 * 1000, // 15 minutes
  max: 100,
  message: 'Too many requests from this IP'
});

// Replace Redis limiter with in-memory limiter
const apiKeyLimiter = new RateLimiterMemory({
  points: 10, // 10 requests
  duration: 60, // per 60 seconds
  keyPrefix: 'api_key'
});

module.exports = { apiLimiter, apiKeyLimiter };