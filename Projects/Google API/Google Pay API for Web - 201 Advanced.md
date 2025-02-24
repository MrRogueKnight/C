
---

# **Google Pay API for Web 201: Advanced** 🚀  

## **1. Introduction**  

### **Welcome to Google Pay API for Web 201: Advanced!** 🎉  

This codelab builds upon **Google Pay API for Web 101: Basics**, so make sure you've completed that first before proceeding.  

### **📚 What You’ll Learn**  

- **How to customize the Google Pay button** 🎨  
- **How to start the payment process** 🛒  
- **How to acknowledge payment authorization status** ✅  
- **How to handle shipping address changes** 🏠  
- **How to handle redemption codes** 🎟️  

### **🛠 What You’ll Need**  

- A **text editor** of your choice to edit **HTML** and **JavaScript** files.  
- **Google Chrome** or another browser that supports **local website testing**.  
- A **Google Pay merchant ID** (for production). Register at [Google Pay & Wallet Console](https://pay.google.com/) in just a minute.  

---

## **2. Button Customization**  

The **Google Pay button** can be customized using various options. Below is a brief overview of **ButtonOptions**:  

| **Option**              | **Necessity** | **Values** |
|-------------------------|--------------|------------|
| `onClick`               | Required     | Name of JavaScript event handler |
| `allowedPaymentMethods` | Optional     | `PaymentMethod[]` |
| `buttonColor`           | Optional     | `default`, `black`, `white` |
| `buttonLocale`          | Optional     | Two-letter ISO 639-1 language code |
| `buttonRadius`          | Optional     | `0 to 100` |
| `buttonRootNode`        | Optional     | `HTMLDocument` or `ShadowRoot` |
| `buttonSizeMode`        | Optional     | `static`, `fill` |
| `buttonType`            | Optional     | `book`, `buy`, `checkout`, `donate`, `order`, `pay`, `plain`, `subscribe` |

### **💻 Updating `main.js`**  

Find the `renderGooglePayButton()` method in **main.js** and replace it with:  

```javascript
function renderGooglePayButton() {
  const button = getGooglePaymentsClient().createButton({
    buttonColor: 'default',
    buttonType: 'buy',
    buttonRadius: 4,
    buttonLocale: 'en',
    onClick: onGooglePaymentButtonClicked,
    allowedPaymentMethods: baseGooglePayRequest.allowedPaymentMethods,
  });

  document.getElementById(GPAY_BUTTON_CONTAINER_ID).appendChild(button);
}
```

### **📝 Code Explanation**  

- `createButton()` generates a **Google Pay button** with customized properties like **color**, **type**, **radius**, and **locale**.  
- The button **triggers** the payment process via `onClick: onGooglePaymentButtonClicked`.  

---

## **3. Payment Data Callbacks**  

Google Pay provides **callbacks** to handle specific **events** during the payment process.  

### **🛠 Update `main.js`**  

#### **Step 1: Replace `// todo: paymentDataCallbacks` with this code:**  

```javascript
paymentDataCallbacks: {
  onPaymentAuthorized: onPaymentAuthorized,
  onPaymentDataChanged: onPaymentDataChanged
},
```

#### **Step 2: Add the following event handlers at the end of `main.js`**  

```javascript
function onPaymentAuthorized(paymentData) {
  // We'll fill this in later
}

function onPaymentDataChanged(intermediatePaymentData) {
  // We'll fill this in later
}
```

#### **Step 3: Replace `// todo: callbackIntents` with this code:**  

```javascript
callbackIntents: [
  'PAYMENT_AUTHORIZATION',
  'SHIPPING_ADDRESS',
  'SHIPPING_OPTION',
  'OFFER',
],
shippingAddressRequired: true,
shippingOptionRequired: true,
shippingOptionParameters: {
  defaultSelectedOptionId: 'shipping-001',
  shippingOptions: [
    { id: 'shipping-001', label: '$0.00: Free shipping', description: 'Delivered in 5 business days.' },
    { id: 'shipping-002', label: '$1.99: Standard shipping', description: 'Delivered in 3 business days.' },
    { id: 'shipping-003', label: '$1000: Express shipping', description: 'Delivered in 1 business day.' }
  ],
},
```

### **📝 Code Explanation**  

- `onPaymentAuthorized` is **required** and processes **payment authorization**.  
- `onPaymentDataChanged` handles **shipping, discounts, and dynamic updates**.  
- `callbackIntents` defines **which events** trigger the callbacks.  

---

## **4. Payment Authorization**  

This function **simulates payment processing** and **handles authorization errors**.  

### **🛠 Replace `onPaymentAuthorized()` in `main.js` with:**  

```javascript
function onPaymentAuthorized(paymentData) {
  return new Promise(function(resolve, reject) {
    console.log("onPaymentAuthorized", paymentData);

    // Simulate a payment processing success rate of 70%
    const paymentAuthorizationResult = (Math.random() > 0.3)
      ? { transactionState: 'SUCCESS' }
      : {
          transactionState: 'ERROR',
          error: {
            intent: 'PAYMENT_AUTHORIZATION',
            message: 'Insufficient funds',
            reason: 'PAYMENT_DATA_INVALID'
          }
        };

    resolve(paymentAuthorizationResult);
  });
}
```

### **📝 Code Explanation**  

- This function **logs payment data** for debugging.  
- It **randomly simulates** a **70% success rate** for transaction approval.  
- In case of failure, it returns an **error message** (e.g., "Insufficient funds").  

---

## **5. Payment Data Change**  

This function dynamically **updates prices, shipping options, and discounts** based on user input.  

### **🛠 Replace `onPaymentDataChanged()` in `main.js` with:**  

```javascript
function onPaymentDataChanged(intermediatePaymentData) {
  return new Promise(function(resolve, reject) {
    let paymentDataRequestUpdate = {};

    console.log("onPaymentDataChanged", intermediatePaymentData);

    switch(intermediatePaymentData.callbackTrigger) {
      case "INITIALIZE":
        // Handle initialization
        break;
      case "SHIPPING_ADDRESS":
        // Update paymentDataRequestUpdate.newTransactionInfo
        break;
      case "SHIPPING_OPTION":
        // Update paymentDataRequestUpdate.newTransactionInfo
        // Update paymentDataRequestUpdate.newShippingOptionParameters
        break;
      case "OFFER":
        // Update paymentDataRequestUpdate.newTransactionInfo
        // Update paymentDataRequestUpdate.newOfferInfo
        break;
      default:
        // Update paymentDataRequestUpdate.error
    }

    resolve(paymentDataRequestUpdate);
  });
}
```

### **📝 Code Explanation**  

- This function **listens** for changes in **shipping address, shipping options, and discounts**.  
- It **updates transaction info** dynamically.  
- The `INITIALIZE` callback ensures that changes **persist across multiple calls**.  

---

## **6. Conclusion**  

🎉 **Congratulations!** You've successfully implemented **Google Pay API for Web 201**!  

### **🚀 Running the Project**  

#### **Option 1: Open in Google Chrome**  
1️⃣ Open **Google Chrome**.  
2️⃣ Use **File > Open File…** to select `index.html`.  

#### **Option 2: Run a Local Web Server**  
```bash
$ cd /your/path/to/pay-web-101
$ python3 -m http.server
```
📍 Open **http://localhost:8000** in your browser.  

---

### **📌 Next Steps**  

✔ **Review the integration checklist**.  
✔ **Explore advanced features** like tokenization & gateways.  
✔ **Stay updated:**  

- Join **#payments** on Discord  
- Follow **[@GooglePayDevs](https://twitter.com/GooglePayDevs)** on X  
- Watch **Google Pay tutorials** on YouTube  

🚀 **Now deploy your integration and start accepting payments!** 💳