#include <iostream>
#include <string>
#include <vector>

std::string morseEncode(std::string message) {
        
std::vector<std::string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
std::string encodedMessage = "";

for (int i = 0 ; i < message.size() ; i++) {
    for (int j = 0 ; j < morse.size() ; j++) {
        if (message[i] == alphabet[j]) {
            encodedMessage += morse[j];
            encodedMessage += " ";
            break;
        }
        else if (message[i] == alphabet[26]) {
            encodedMessage += "  ";
            break;
        }
    }
}
return encodedMessage;

}