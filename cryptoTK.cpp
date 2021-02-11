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
        if (message[i] != ' ') {
            unit += message[i];
        }
        else if (message[i] == ' ') {

            while (message[i] == ' ') {
                spaces++;
                i++;
            }
            if (spaces == 1) {
                morseUnits.push_back(unit);
            }

            else if (spaces == 3) {
                morseUnits.push_back(unit);
                morseUnits.push_back("   ");
            }
            unit = "";
            spaces = 0;
            i--;
        }  
    }
    morseUnits.push_back(unit);

    for (int i = 0 ; i < morseUnits.size() ; i++) {
        for (int j = 0 ; j < morse.size() ; j++) {
            if (morseUnits[i] == morse[j]) {
                decodedMessage += alphabet[j];
                break;
            }
            else if (morseUnits[i] == "   ") {
                decodedMessage += " ";
                break;
            }
        }
    }

    return decodedMessage;
}

