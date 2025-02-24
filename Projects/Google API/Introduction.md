---
# **1. Introduction** 
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

# **3. Configure Google Pay**  

## **Step 1: Understanding Google Pay Configuration**  

A **Google Pay payment request** requires a request object. The **`baseGooglePayRequest`** object contains the **minimum required settings** for all payment requests.  
Additional settings will be added later as needed.  

---

## **Step 2: Add Google Pay Configuration to `main.js`**  

Open `main.js` and **add the following optimized code**:  

```javascript
//=============================================================================
// Google Pay Configuration
//=============================================================================

/**
 * The DOM element ID where the Google Pay button will be inserted.
 */
const GPAY_BUTTON_CONTAINER_ID = "gpay-container";

/**
 * Merchant details (update these for production).
 * - `merchantId` is required for the PRODUCTION environment.
 * - `merchantName` is your business name.
 */
const merchantInfo = {
  merchantId: "12345678901234567890", // Replace with your real merchant ID
  merchantName: "Example Merchant"
};

/**
 * Base Google Pay request object.
 * This object contains the minimum required settings for all requests.
 */
const baseGooglePayRequest = {
  apiVersion: 2,
  apiVersionMinor: 0,
  allowedPaymentMethods: [
    {
      type: "CARD",
      parameters: {
        allowedAuthMethods: ["PAN_ONLY", "CRYPTOGRAM_3DS"],
        allowedCardNetworks: ["AMEX", "DISCOVER", "INTERAC", "JCB", "MASTERCARD", "VISA"]
      },
      tokenizationSpecification: {
        type: "PAYMENT_GATEWAY",
        parameters: {
          gateway: "example", // Replace with your actual payment gateway
          gatewayMerchantId: "exampleGatewayMerchantId" // Replace with actual gateway merchant ID
        }
      }
    }
  ],
  merchantInfo
};

/**
 * Prevent accidental modifications to `baseGooglePayRequest`.
 * - This ensures all modifications are done on a cloned version.
 */
Object.freeze(baseGooglePayRequest);
```

---

## **Step 3: Code Explanation & Best Practices**  

### ✅ **1. Google Pay Button Container (`GPAY_BUTTON_CONTAINER_ID`)**
- **Why?** This constant ensures that the Google Pay button is always inserted into the correct `<div id="gpay-container">`.  

### ✅ **2. Merchant Configuration (`merchantInfo`)**
- **For TEST Environment**: `merchantId` is **optional**.  
- **For PRODUCTION**: `merchantId` is **required**. Register it at the [Google Pay & Wallet Console](https://pay.google.com/business/console).  

### ✅ **3. Base Google Pay Request (`baseGooglePayRequest`)**
- Contains **core settings** for Google Pay transactions.  
- Supports **major card networks** (Visa, Mastercard, AMEX, etc.).  
- Uses **"PAYMENT_GATEWAY"** tokenization (replace `"example"` with your real gateway).  

### ✅ **4. Freezing Configuration (`Object.freeze`)**
- **Why?** This prevents accidental modifications to `baseGooglePayRequest`.  
- If modifications are needed, **clone the object instead of mutating it directly**.  

---

## **Step 4: Resources & Next Steps**  

📌 **Further Reading & Documentation:**  
- [🔗 Google Pay API Request Objects Documentation](https://developers.google.com/pay/api/web/reference/request-objects)  
- [🔗 Payment Methods & Tokenization Specification](https://developers.google.com/pay/api/web/reference/request-objects#PaymentMethod)  
- [🔗 Google Pay & Wallet Console](https://pay.google.com/business/console)  

---
# **4. Add Google Payments Client**  

## **Step 1: Understanding the Payments Client**  

The **Google Payments Client** is responsible for:  
✔ Making **payment requests**.  
✔ Managing **merchant credentials**.  
✔ Handling **callbacks** (e.g., payment data changes, authorization changes).  

📌 **Note:**  
- This codelab **only** covers making payment requests.  
- Advanced topics (like `PaymentDataCallbacks`) are not covered here.  

---

## **Step 2: Add Payments Client Code to `main.js`**  

Append this **optimized code** at the bottom of `main.js`:  

```javascript
//=============================================================================
// Google Payments Client Singleton
//=============================================================================

/**
 * Singleton instance of the Google Payments client.
 */
let paymentsClient = null;

/**
 * Returns a Google Payments client instance.
 * - Ensures only a single instance is created (Singleton pattern).
 * - Configures the client for TEST or PRODUCTION environments.
 *
 * @returns {google.payments.api.PaymentsClient} Google Payments client instance
 */
function getGooglePaymentsClient() {
  if (!paymentsClient) {
    paymentsClient = new google.payments.api.PaymentsClient({
      environment: "TEST", // Change to "PRODUCTION" in live deployments
      merchantInfo, // Uses the merchantInfo object defined earlier
      // TODO: Implement paymentDataCallbacks for dynamic updates (codelab pay-web-201)
    });
  }
  return paymentsClient;
}
```

---

## **Step 3: Code Explanation & Best Practices**  

### ✅ **1. Singleton Pattern (`paymentsClient` variable)**
- Ensures **only one instance** of `PaymentsClient` is created.  
- Prevents **unnecessary memory usage** or duplicate instances.  

### ✅ **2. `getGooglePaymentsClient()` Method**
- **Checks if `paymentsClient` already exists**.  
- If not, **creates and stores a new instance**.  
- Returns the same instance **throughout the script lifecycle**.  

### ✅ **3. Google Pay Environment (`environment` key)**
- **"TEST"** → Default for development (does not process real payments).  
- **"PRODUCTION"** → Required for live transactions.  

### ✅ **4. Merchant Information (`merchantInfo`)**
- Uses the **same merchant details** from the previous step.  
- Ensures consistency across all payment requests.  

### ✅ **5. Placeholder for `paymentDataCallbacks`**
- This is used for **dynamic payment updates**.  
- Not needed in this codelab but useful for advanced cases (e.g., tax calculations).  

---
Here’s the **best-optimized version** of your **"Add Helpers"** section, improving clarity, efficiency, and maintainability. 🚀  

---

# **5. Add Helper Functions**  

## **Step 1: Understanding Helper Functions**  

Helper functions **improve code readability and reusability** by:  
✔ Keeping logic **modular** and **organized**.  
✔ Reducing **repetitive code**.  
✔ Ensuring **maintainability and scalability**.  

---

## **Step 2: Add the Helper Functions to `main.js`**  

Append the following **optimized code** to the bottom of `main.js`:  

```javascript
//=============================================================================
// Helpers
//=============================================================================

/**
 * Creates a deep copy of an object.
 * - Uses JSON serialization to avoid shared references.
 * - Ensures changes to copied objects do not affect the original.
 *
 * @param {Object} obj - The object to clone.
 * @returns {Object} A new deep copy of the object.
 */
const deepCopy = (obj) => JSON.parse(JSON.stringify(obj));

/**
 * Renders the Google Pay button inside the designated container.
 * - Uses the singleton payments client to create the button.
 * - Appends the button to the DOM inside the specified container.
 */
function renderGooglePayButton() {
  const container = document.getElementById(GPAY_BUTTON_CONTAINER_ID);
  if (!container) {
    console.error(`Error: Google Pay container element (#${GPAY_BUTTON_CONTAINER_ID}) not found.`);
    return;
  }

  const button = getGooglePaymentsClient().createButton({
    onClick: onGooglePaymentButtonClicked
  });

  container.appendChild(button);
}
```

---

## **Step 3: Code Explanation & Best Practices**  

### ✅ **1. `deepCopy(obj)`**  
- **Creates a deep copy** of any JavaScript object.  
- Uses **JSON serialization** (`JSON.parse(JSON.stringify(obj))`).  
- Prevents **shared references**, ensuring changes to the copy **do not affect the original**.  
- **Best Practice:** Always use deep copies when modifying **configuration objects** to prevent unintended mutations.  

### ✅ **2. `renderGooglePayButton()`**  
- **Fetches the Google Pay button container** using `document.getElementById(GPAY_BUTTON_CONTAINER_ID)`.  
- **Checks if the container exists** before adding the button (prevents runtime errors).  
- Uses `getGooglePaymentsClient().createButton()` to generate the button.  
- Attaches `onGooglePaymentButtonClicked` as the **click event handler**.  
- **Logs an error (`console.error`) if the container is missing**, improving debugging.  

---

## **Step 4: Additional Customization**  

🎨 **Want to customize the button?**  
Google Pay buttons **support styling options** such as:  
✔ **Button type** (`buy`, `plain`, `donate`)  
✔ **Color theme** (`black`, `white`)  
✔ **Size** (`small`, `medium`, `large`)  

📌 **Resources:**  
👉 [Customize Your Google Pay Button](https://developers.google.com/pay/api/web/guides/brand-guidelines)  

---
