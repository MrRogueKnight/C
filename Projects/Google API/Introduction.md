### **1. Introduction**  
#### **What You'll Build**  
At the end of this codelab, you will have a **minimum viable website** with a **fully functional Google Pay integration**.  
- The project will retrieve a **payment token**, which can be **sent to a payment service provider (PSP)** for processing transactions.  
- You will gain hands-on experience implementing **secure and seamless payment processing**.  

#### **What You'll Learn**  
By completing this course, you will learn:  
✅ How to **load and configure** the Google Pay API properly.  
✅ How to **display the Google Pay button**, ensure it matches branding guidelines, and handle user interactions.  
✅ How to **request and retrieve a payment token** securely from Google Pay.  
✅ How to **test transactions in a sandbox environment** before going live.  
✅ Best practices for **handling payment failures and errors gracefully**.  

#### **What You'll Need**  
🔹 A **text editor** (VS Code, Sublime Text, or your preferred editor) to edit HTML and JavaScript files.  
🔹 **Google Chrome** (or any browser with developer tools) to test the local website.  
🔹 A **Google Pay merchantId** for production use (sign up in **Google Pay & Wallet Console**).  
🔹 A **basic understanding of JavaScript and HTML** to follow along smoothly.  
🔹 Optional: A **test PSP (e.g., Stripe, Adyen, or Braintree)** to simulate real transactions.  
 


---

# **2. Create the HTML Page**  

## **Step 1: Set Up Project Files**  

1️⃣ **Create a new project folder:**  
   ```bash
   mkdir gpay-web-101
   cd gpay-web-101
   ```  

2️⃣ **Inside the folder, create two empty files:**  
   ```bash
   touch index.html main.js
   ```  

3️⃣ **Your project structure should look like this:**  
   ```
   gpay-web-101/
   ├── index.html
   ├── main.js
   ```

---

## **Step 2: Write the HTML Code**  

Open `index.html` in your **IDE** (VS Code, Sublime Text, WebStorm, etc.), and add the following **optimized code**:  

```html
<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Google Pay API for Web 101</title>
  <style>
    /* Basic styling for the page */
    body {
      font-family: Arial, sans-serif;
      text-align: center;
      margin: 50px;
    }
    
    /* Center the Google Pay button */
    #gpay-container {
      display: flex;
      justify-content: center;
      margin-top: 20px;
    }
  </style>
</head>

<body>
  <h1>Google Pay Integration</h1>
  <p>Click the button below to test Google Pay.</p>

  <!-- Google Pay button container -->
  <div id="gpay-container"></div>

  <p>Transaction info and errors will be logged to the console.</p>

  <!-- Load the main JavaScript file -->
  <script type="text/javascript" src="main.js"></script>

  <!-- Load the Google Pay API asynchronously -->
  <script async src="https://pay.google.com/gp/p/js/pay.js" onload="onGooglePayLoaded()"></script>
</body>

</html>
```

---

## **Step 3: Code Explanation & Best Practices**  

### ✅ **Google Pay Button Container**
- The `<div>` with `id="gpay-container"` is **where the Google Pay button will be inserted** dynamically.  
- **You can move or style this `<div>` anywhere** in your webpage layout.  

### ✅ **JavaScript Inclusion Order**
- **Why `main.js` is loaded first?**  
  - It ensures that `onGooglePayLoaded()` is **defined before** `pay.js` executes.  
  - Prevents potential **"undefined function"** errors.  

### ✅ **Google Pay API Script (`pay.js`)**
- **Loaded asynchronously** (`async`) to improve performance and **prevent blocking page load**.  
- Calls `onGooglePayLoaded()` once the API is fully loaded.  
- This function (which we will define in `main.js`) **initializes the Google Pay button**.  

---

## **Step 4: Enhancements & Best Practices**  

✅ **📌 Improve Console Debugging**  
- Open **Chrome DevTools** (`F12` → Console) to check logs and troubleshoot issues.  
- Add `console.log()` statements in `main.js` to monitor events and errors.  

✅ **📌 Make the Button Mobile-Friendly**  
- Ensure the Google Pay button is responsive and scales well on different devices.  
- Modify CSS styles to adjust button size dynamically.  

✅ **📌 Security Considerations**  
- **Never expose API keys or merchant credentials in client-side JavaScript.**  
- Payment processing should be handled securely **on the backend**.  

✅ **📌 Next Step: Implement `main.js`**  
- Now that the HTML structure is ready, the next step is to **define `onGooglePayLoaded()`** in `main.js` to initialize the Google Pay button.  

---
