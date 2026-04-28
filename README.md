# ProSecureEncryptor (Hex Edition)

A university course project built in C++ that demonstrates basic cryptography concepts. This console application allows users to encrypt plain text messages using a secret key and outputs the result in safe, easy-to-copy Hexadecimal format. It can also reverse the process to decrypt the Hex code back into the original message.

> **Note on Security:** While this project is a great educational tool for understanding bitwise operations and data encoding, it relies on a simple XOR cipher. It is designed for learning and demonstration purposes, rather than securing highly sensitive real-world data!

## ✨ Features
* **XOR Cipher Encryption:** Secures plain text using a custom repeating secret key.
* **Hexadecimal Encoding:** Converts the encrypted bytes into Hex format to prevent broken characters and make copying/pasting easy.
* **Seamless Decryption:** Reverses the Hex string back into readable text using the same secret key.
* **Interactive CLI:** A simple, menu-driven command-line interface.

## 🚀 How to Run

The core logic is contained entirely within `Project Encryption.cpp`, meaning you don't need any complex external libraries.

### Option 1: Code::Blocks (Recommended)
1. Open Code::Blocks.
2. Load the `Project Encryption.cpp` file.
3. Click **Build and Run**. This is the quickest way to get clean output and functionality.

### Option 2: Linux Terminal (GCC)
If you are compiling this on a Linux system, you can safely ignore or delete the provided `Project Encryption.exe` and `Project Encryption.o` files, as those are compiled for Windows.

1. Open your terminal in the project directory.
2. Compile the code:
   ```bash
   g++ "Project Encryption.cpp" -o encryptor
   ```
3. Run the executable:
   ```bash
   ./encryptor
   ```

## 💻 Usage Example

1. Choose **1** to Encrypt.
2. Enter your message: `Hello World`
3. Enter your secret key: `key`
4. The program will output a Hex string (e.g., `230005070a4b3c001b070f`). 
5. To decrypt, choose **2**, paste the Hex string, and provide the same secret key to get your message back!

## Final Checklist to match coursework guidelines:
 - Sequence: Your code executes sequentially, taking user inputs and processing them step-by-step.  
 - Selection: You successfully used if, else if, and else statements to handle the user's menu choices.  
 - Loop: You implemented a while (true) loop to keep the main menu running until the user exits, as well as for loops to iterate through strings during the    encryption and decryption processes.  

Function: You used custom functions (encryptToHex and decryptFromHex) to handle the core logic.
---

Leave your comments for future updates and new fantastic features..... 
٩(◕‿◕)۶
