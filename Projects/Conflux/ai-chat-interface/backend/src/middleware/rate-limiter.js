const rateLimit = require('express-rate-limit');
const { RateLimiterRedis } = require('rate-limiter-flexible');
const redisClient = require('../config/redis-config');

const apiLimiter = rateLimit({
  windowMs: 15 * 60 * 1000, // 15 minutes
  max: 100,
  message: 'Too many requests from this IP'
});

const apiKeyLimiter = new RateLimiterRedis({
  storeClient: redisClient,
  points: 10, // 10 requests
  duration: 60, // per 60 seconds
  keyPrefix: 'api_key'
});

module.exports = { apiLimiter, apiKeyLimiter };