#include <iostream>

#define buffer_size 10

#include <cstring>
#ifdef WITH_UTILS
#include "utils.h"
#endif // WITH_UTILS


void checkBufferSafety(const char* input) {
    char buffer[buffer_size];
    std::strncpy(buffer, input, buffer_size - 1);
    buffer[buffer_size - 1] = '\0'; // Ensure null termination

    if (std::strlen(input) >= buffer_size) {
        std::cout << "Buffer overflow detected!" << std::endl;
    } else {
        std::cout << "Buffer is safe." << std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    const char* testString1 = "  Short  ";
    const char* testString2 = "This is too long for the buffer";

#ifdef WITH_UTILS

    std::string lowerStr1 = ltrim(toLower(testString1));
    std::string lowerStr2 = toLower(testString2);
    std::cout << "Lowercase: " << lowerStr1 << std::endl;
    std::cout << "Lowercase: " << lowerStr2 << std::endl;

    std::string upperStr1 = ltrim(testString1);
    std::string upperStr2 = toUpper(testString2);
    std::cout << "Uppercase: " << upperStr1 << std::endl;   
#endif // WITH_UTILS

    std::cout << "Testing string: " << testString1 << std::endl;
    checkBufferSafety(testString1);

    std::cout << "Testing string: " << testString2 << std::endl;
    checkBufferSafety(testString2);

    std::cout << testString1[5] << std::endl;

    return 0;
}