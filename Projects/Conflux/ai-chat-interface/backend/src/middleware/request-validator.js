module.exports = (req, res, next) => {
    if (!req.body.message || typeof req.body.message !== 'string') {
      return res.status(400).json({ error: "Invalid message format" });
    }
    
    if (!Array.isArray(req.body.apiKeys) || req.body.apiKeys.length === 0) {
      return res.status(400).json({ error: "No API keys provided" });
    }
  
    next();
  };