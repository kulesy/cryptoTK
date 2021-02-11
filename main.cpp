#include "cryptoTK.hpp"
#include <iostream>
#include <string>
#include <vector>


int main(){
    std::cout << morseDecode(morseEncode("hello there matey i have a question")) << "\n";
}