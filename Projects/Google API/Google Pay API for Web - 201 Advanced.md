---
## **1. Introduction**  

Welcome to **Google Pay API for Web 201: Advanced**! 🚀  

This codelab builds upon the **Google Pay API for Web 101: Basics**, so make sure you've completed that first before proceeding.  

---

### **📚 What You’ll Learn**  
By the end of this codelab, you’ll know how to:  
✅ **Customize the Google Pay button** to match your brand's style.  
✅ **Start the payment process** using the Google Pay API.  
✅ **Acknowledge payment authorization status** for successful transactions.  
✅ **Handle shipping address changes** dynamically.  
✅ **Process redemption codes** for special offers and discounts.  

---

### **🛠 What You’ll Need**  
To complete this codelab, ensure you have:  
✔️ A **text editor** (VS Code, Sublime, or any editor for HTML/JavaScript).  
✔️ **Google Chrome** (or another browser that supports local website testing).  
✔️ A **Google Pay merchant ID** for production use.  

📌 **Tip:** Register now at the **[Google Pay & Wallet Console](https://pay.google.com/business/console/)** to get your **merchant ID** in just a minute!  
---

## **2. Button Customization**  

Customizing the **Google Pay button** allows you to tailor its appearance and behavior to match your website's design. Below is an overview of the available **ButtonOptions** and their configurations.  

---

### **🛠 ButtonOptions Overview**  

| **Option**               | **Necessity** | **Values** |
|--------------------------|--------------|------------|
| `onClick`               | **Required**  | Name of JavaScript event handler |
| `allowedPaymentMethods` | Optional      | `PaymentMethod[]` |
| `buttonColor`           | Optional      | `default`, `black`, `white` |
| `buttonLocale`          | Optional      | Two-letter ISO 639-1 language code (e.g., `en`, `fr`, `es`, etc.) |
| `buttonRadius`          | Optional      | `0` to `100` (corner radius in pixels) |
| `buttonRootNode`        | Optional      | `HTMLDocument` or `ShadowRoot` |
| `buttonSizeMode`        | Optional      | `static`, `fill` |
| `buttonType`            | Optional      | `book`, `buy`, `checkout`, `donate`, `order`, `pay`, `plain`, `subscribe` |

---

### **🔧 Update Your Code**  

Find the `renderGooglePayButton()` method in your **main.js** file and **replace** it with the following code:  

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

---

### **📌 Code Explanation**  
✔️ The `createButton()` method generates a **Google Pay button** with customized **styling and functionality**.  
✔️ The **ButtonOptions** allow you to **set the color, shape, language, and click behavior**.  
✔️ The button is **appended to the page** inside the element identified by `GPAY_BUTTON_CONTAINER_ID`.  

For **more styling options**, refer to the **[Google Pay Button Customization Guide](https://developers.google.com/pay/api/web/guides/ux-guidelines/buttons)**. 🚀
---
