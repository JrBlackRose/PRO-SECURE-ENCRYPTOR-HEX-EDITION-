#ifndef CRYPTO_ENGINE_H
#define CRYPTO_ENGINE_H

#include <string>

class CipherTool {
public:
    // Encrypts the text and safely converts it to Hexadecimal
    std::string encryptToHex(const std::string& text, const std::string& key);

    // Reads the Hexadecimal and decrypts it back to normal text
    std::string decryptFromHex(const std::string& hexText, const std::string& key);
};

#endif
