const crypto = require('crypto');

const encryptKey = (key) => {
  const iv = crypto.randomBytes(16);
  const cipher = crypto.createCipheriv(
    process.env.ENCRYPTION_ALGORITHM,
    process.env.SECRET_KEY,
    iv
  );
  return iv.toString('hex') + ':' + 
    cipher.update(key, 'utf8', 'hex') + 
    cipher.final('hex');
};

const decryptKey = (encryptedKey) => {
  const [iv, content] = encryptedKey.split(':');
  const decipher = crypto.createDecipheriv(
    process.env.ENCRYPTION_ALGORITHM,
    process.env.SECRET_KEY,
    Buffer.from(iv, 'hex')
  );
  return decipher.update(content, 'hex', 'utf8') + 
    decipher.final('utf8');
};

module.exports = { encryptKey, decryptKey };