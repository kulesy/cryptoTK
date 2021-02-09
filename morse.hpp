#include <iostream>
#include <string>
#include <vector>

class Morse {
    std::string message;
public:
    Morse(std::string message);

    std::string encode() {
        
    }
private:
    std::vector<std::string> morse = {".-", "-...", "-.-.", "-.." ".", "..-.", "--.", "....", ".." ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--" "-..-", "-.--", "--.."};
    std::vector<std::string> alphabet = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
};