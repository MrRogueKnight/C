```markdown
# 🤖 AI Chat Interface

A personal AI chat interface supporting multiple AI providers (ChatGPT, DeepSeek, Perplexity). Runs locally with secure API key management.

![Demo](demo-screenshot.png) <!-- I need to Add a screenshot later -->

## 🚀 Features
- Multi-API support (ChatGPT + more)
- Real-time streaming responses
- Local storage for API keys/history
- Rate limiting & error handling
- Clean React UI

## 📋 Prerequisites
- Node.js v18+
- npm v9+
- Docker (for Redis)
- API keys for:
  - [OpenAI](https://platform.openai.com/api-keys)
  - [DeepSeek](https://platform.deepseek.com/)
  - [Perplexity](https://docs.perplexity.ai/)

## 🛠️ Local Setup

### 1. Clone Repository
```bash
git clone https://github.com/MrRogueKnight/ai-chat-interface.git
cd ai-chat-interface
```

### 2. Backend Setup
```bash
cd backend

# Install dependencies
npm install

# Create environment file
cp .env.example .env
```

Edit `.env` with your API keys:
```env
OPENAI_API_KEY=your_openai_key
DEEPSEEK_API_KEY=your_deepseek_key
PERPLEXITY_API_KEY=your_perplexity_key
```

### 3. Frontend Setup
```bash
cd ../frontend

# Install dependencies
npm install
```

### 4. Start Redis (Docker)
```bash
# From project root
docker run -d -p 6379:6379 --name ai-chat-redis redis:alpine
```

### 5. Run Backend
```bash
cd backend
npm start
# Server runs on http://localhost:3001
```

### 6. Run Frontend
```bash
cd frontend
npm start
# App runs on http://localhost:3000
```

## 🖥️ Usage
1. **Add API Keys** in the UI:
   - Select provider from dropdown
   - Enter API key
   - Click "Add Key"

2. **Start Chatting**:
   - Type message in input field
   - Press Enter/Send
   - Responses appear in real-time

![UI Demo](ui-demo.gif) <!-- I will Add a GIF later -->

## 🧰 Troubleshooting

### Common Issues
1. **Redis Connection Failed**:
   - Ensure Docker is running
   - Check Redis container status: `docker ps`

2. **Missing API Keys**:
   - Verify `.env` file exists in `/backend`
   - Restart backend after adding keys

3. **CORS Errors**:
   - Ensure backend is running on port 3001
   - Confirm `cors` middleware is enabled in `server.js`

### Debugging
- Check backend logs for API errors
- Use browser DevTools > Network tab to inspect requests
- Clear local storage if needed (Developer Tools > Application)

## 📂 Project Structure
```
ai-chat-interface/
├── backend/          # Express server
├── frontend/         # React app
├── docker-compose.yml
└── README.md
```

## 📜 License
MIT License - See [LICENSE](LICENSE)

---

**Happy Coding!** 🚀  
Reach out for support: @MrRogueKnight
```

---

### Key Elements Included:
1. **Setup Instructions**: Step-by-step commands for local development
2. **Troubleshooting**: Common issues and solutions
3. **Visual Aids**: Placeholders for screenshots/GIFs
4. **Project Structure**: Quick overview
5. **Prerequisites**: Clear requirements list

To use this:
1. Save as `README.md` in your project root
2. Add actual screenshots/GIFs later
3. Update email/license as needed

This README helps users:
- Get started quickly
- Understand the architecture
- Debug common issues
- Contribute effectively