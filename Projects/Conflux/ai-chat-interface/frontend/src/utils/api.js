import axios from 'axios';

export const chatAPI = axios.create({
  baseURL: 'http://localhost:3001/api',
  timeout: 10000,
});