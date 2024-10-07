#include <iostream>

int main() {

    // Character initialization
    char letter1 {'a'};
    char letter2 {'r'};
    char letter3 {'r'};
    char letter4 {'o'};
    char letter5 {'w'};

    // Output each character
    std::cout << "Characters:" << std::endl;
    std::cout << letter1 << std::endl; // Output: a
    std::cout << letter2 << std::endl; // Output: r
    std::cout << letter3 << std::endl; // Output: r
    std::cout << letter4 << std::endl; // Output: o
    std::cout << letter5 << std::endl; // Output: w

    std::cout << std::endl;

    // Demonstrating ASCII values
    char asciiValue = 65; // ASCII code for 'A'
    std::cout << "ASCII Character from value 65: " << asciiValue << std::endl;            // Output: A
    std::cout << "ASCII Code of 'A': " << static_cast<int>(asciiValue) << std::endl; // Output: 65

    std::cout << std::endl;

    // Displaying size of char
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    
    return 0;
}
