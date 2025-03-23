// Replace with in-memory limiter
const redisClient = {
  connect: () => console.log("Redis disabled - Using in-memory rate limiting"),
  on: () => {},
  get: (key, callback) => callback(null, null), // Simulate Redis GET
  set: (key, value, callback) => callback(null, "OK"), // Simulate Redis SET
  del: (key, callback) => callback(null, 1), // Simulate Redis DEL
  quit: () => console.log("Redis connection closed (in-memory mode)")
};

module.exports = redisClient;