require('dotenv').config();
const express = require('express');
const cors = require('cors');
const helmet = require('helmet');
const chatRoutes = require('./routes/chat-routes');
const errorHandler = require('./middleware/error-handler');
const redisClient = require('./config/redis-config');

const app = express();
const port = process.env.PORT || 3001;

// Middleware
app.use(helmet());
app.use(cors());
app.use(express.json());

// Routes
app.use('/api', chatRoutes);

// Error handling
app.use(errorHandler);

// Start server
const startServer = async () => {
  await redisClient.connect();
  app.listen(port, () => 
    console.log(`Server running on port ${port} (Redis connected)`)
  );
};

startServer().catch(err => {
  console.error('Failed to start server:', err);
  process.exit(1);
});