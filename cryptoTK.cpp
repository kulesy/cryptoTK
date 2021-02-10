#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", 
"....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

std::vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};

std::string morseEncode(std::string message) {
        
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

std::string morseDecode(std::string message) {
    
    std::string decodedMessage = "";
    int spaces = 0;
    std::vector<std::string> morseUnits = {};
    std::string unit = "";
    for (int i = 0 ; i < message.size() ; i++) {
        if (message[i] == alphabet[26]) {
            for (int j = i ; message[i] == alphabet[26] ; i++) {
                spaces += 1;
            }
            if (spaces == 1) {
                morseUnits.push_back(unit);
                spaces = 0;
            }

            else if (spaces == 3) {
                i += 3;
                morseUnits.push_back("   ");
                spaces = 0;
            }
        }
        else if (message[i] != alphabet[26]) {
            unit += message[i];
        }
    }
    
    

    
}

