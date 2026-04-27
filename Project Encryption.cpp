#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class CipherTool
{
public:
    // 1. Encrypts the text and safely converts it to Hexadecimal
    string encryptToHex(const string& text, const string& key) {
        if (key.empty()) return text;

        stringstream hexStream;
        for (size_t i = 0; i < text.length(); i++) {
            // XOR the character
            unsigned char xorChar = text[i] ^ key[i % key.length()];

            // Convert to a 2-digit Hex number (e.g., 'A' becomes '41')
            hexStream << hex << setfill('0') << setw(2) << (int)xorChar;
        }
        return hexStream.str();
    }

    // 2. Reads the Hexadecimal and decrypts it back to normal text
    string decryptFromHex(const string& hexText, const string& key) {
        if (key.empty() || hexText.length() % 2 != 0) {
            return "Error: Invalid Hex string or empty key.";
        }

        string output = "";
        // Step through the Hex string 2 characters at a time
        for (size_t i = 0; i < hexText.length(); i += 2) {
            string byteString = hexText.substr(i, 2);

            // Convert the 2-digit Hex back to a character
            char byte = (char)strtol(byteString.c_str(), nullptr, 16);

            // Reverse the XOR
            output += byte ^ key[(i / 2) % key.length()];
        }
        return output;
    }
};

int main()
{
    CipherTool cipher;
    int choice;
    string text, key, result;

    while (true) {
        cout << "\n=== PRO SECURE ENCRYPTOR (HEX EDITION) ===" << endl;
        cout << "1. Encrypt a message" << endl;
        cout << "2. Decrypt a message" << endl;
        cout << "3. Exit" << endl;
        cout << "Choice: ";

        cin >> choice;

        if (choice == 3) {
            cout << "Exiting program..." << endl;
            break;
        }
        else if (choice == 1) {
            cout << "\nEnter message to ENCRYPT: ";
            cin.ignore();
            getline(cin, text);

            cout << "Enter secret key: ";
            getline(cin, key);

            result = cipher.encryptToHex(text, key);

            cout << "\n--- Encrypted Hex (Safe to Copy) ---" << endl;
            cout << result << endl;
            cout << "------------------------------------" << endl;
        }
        else if (choice == 2) {
            cout << "\nEnter Hex code to DECRYPT: ";
            cin.ignore();
            getline(cin, text);

            cout << "Enter secret key: ";
            getline(cin, key);

            result = cipher.decryptFromHex(text, key);

            cout << "\n--- Decrypted Message ---" << endl;
            cout << result << endl;
            cout << "-------------------------" << endl;
        }
        else {
            cout << "Invalid choice." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    return 0;
}
