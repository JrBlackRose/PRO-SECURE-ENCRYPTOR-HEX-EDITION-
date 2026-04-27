#include "crypto_engine.h"
#include <iomanip>
#include <sstream>

using namespace std;

string CipherTool::encryptToHex(const string& text, const string& key) {
    if (key.empty()) return text;
    stringstream hexStream;
    for (size_t i = 0; i < text.length(); i++) {
        unsigned char xorChar = text[i] ^ key[i % key.length()];
        hexStream << hex << setfill('0') << setw(2) << (int)xorChar;
    }
    return hexStream.str();
}

string CipherTool::decryptFromHex(const string& hexText, const string& key) {
    if (key.empty() || hexText.length() % 2 != 0) {
        return "Error: Invalid Hex string or empty key.";
    }
    string output = "";
    for (size_t i = 0; i < hexText.length(); i += 2) {
        string byteString = hexText.substr(i, 2);
        char byte = (char)strtol(byteString.c_str(), nullptr, 16);
        output += byte ^ key[(i / 2) % key.length()];
    }
    return output;
}
