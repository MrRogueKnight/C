(Due to technical issues, the search service is temporarily unavailable.)

Here's how to *integrate the ChatGPT API* into your project:

---

### *Step 1: Get OpenAI API Key*
1. Go to [OpenAI Platform](https://platform.openai.com/api-keys)
2. Create an account (or log in)
3. Click "Create new secret key"
4. Copy the key (it starts with sk-)

---

### *Step 2: Backend Configuration*

#### 1. Add to backend/.env
env
OPENAI_API_KEY=your_copied_key_here  # e.g., sk-abc123...


#### 2. Ensure ChatGPT Handler is Active  
In backend/src/handlers/chatgpt-handler.js, use this code:
javascript
const axios = require('axios');
const AI_CONFIG = require('../config/ai-config');

module.exports = async (key, message, res) => {
  try {
    const response = await axios.post(
      `${AI_CONFIG.chatgpt.baseURL}${AI_CONFIG.chatgpt.endpoints.chat}`,
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


---

### *Step 3: Frontend Usage*
1. *Add API Key in UI*:
   - Select "ChatGPT" from dropdown
   - Paste your OpenAI API key
   - Click "Add Key"

2. *Start Chatting*:
   bash
   Type message -> Press Enter/Send
   

---

### *Troubleshooting*
1. *"Invalid API Key" Error*:
   - Verify key starts with sk-
   - Check .env file in backend
   - Restart backend after adding key

2. *No Responses*:
   - Ensure backend is running (npm start in /backend)
   - Check Redis is running (docker ps shows conflux-redis)

3. *Streaming Issues*:
   - Confirm stream: true in ChatGPT handler
   - Check network tab for SSE errors

---

### *Test ChatGPT Integration*
bash
curl -X POST http://localhost:3001/api/chat \
  -H "Content-Type: application/json" \
  -d '{
    "message": "Hello ChatGPT!",
    "apiKeys": [{
      "provider": "chatgpt", 
      "key": "your_openai_key"
    }]
  }'


You should see a JSON response with ChatGPT's reply.

---

Let me know if you get stuck at any step! 🛠
