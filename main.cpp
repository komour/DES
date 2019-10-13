#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>

#include "Des.h"

int main()
{
    Des des;

    std::string initialMessage, initialKey;

    initialMessage = "123456ABCD132536"; //change me!
    initialKey = "AABB09182736CCDD"; //change me!

    std::cout << "Initial Message: " << initialMessage << std::endl;
    std::cout << "Initial Key: " << initialKey << std::endl;

    std::cout << "\nEncryption:\n\n";
    std::string cipher = des.encrypt(initialMessage, initialKey);
    std::cout << "\nCipher Text: " << cipher << std::endl;

    std::cout << "\nDecryption\n\n";
    std::string text = des.decrypt(cipher, initialKey);
    std::cout << "\nInitial Message: " << text << std::endl;
} 