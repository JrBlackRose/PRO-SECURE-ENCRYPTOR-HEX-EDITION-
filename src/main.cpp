#include <iostream>
#include "crypto_engine.h"

using namespace std;

int main() {
    CipherTool cipher;
    int choice;
    string text, key, result;

    while (true) {
        cout << "\n=== PRO SECURE ENCRYPTOR (HEX EDITION) ===" << endl;
        cout << "1. Encrypt a message\n2. Decrypt a message\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 3) break;
        
        cout << "\nEnter text/hex: ";
        cin.ignore();
        getline(cin, text);
        cout << "Enter secret key: ";
        getline(cin, key);

        if (choice == 1) result = cipher.encryptToHex(text, key);
        else result = cipher.decryptFromHex(text, key);

        cout << "\nResult: " << result << "\n----------------" << endl;
    }
    return 0;
}
