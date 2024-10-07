#include <iostream>

int main() {

    // The 'auto' keyword automatically deduces the type of the variable from its initializer.
    // It's a useful feature when the exact type is either complex or irrelevant for the developer.
    auto var1 {12};        // 'var1' is deduced as 'int'
    auto var2 {13.0};      // 'var2' is deduced as 'double'
    auto var3 {14.0f};     // 'var3' is deduced as 'float'
    auto var4 {15.0l};     // 'var4' is deduced as 'long double'
    auto var5 {'e'};       // 'var5' is deduced as 'char'
    
    // Integer modifier suffixes:
    auto var6 {123u};      // 'var6' is deduced as 'unsigned int' (suffix 'u')
    auto var7 {123ul};     // 'var7' is deduced as 'unsigned long' (suffix 'ul')
    auto var8 {123ll};     // 'var8' is deduced as 'long long' (suffix 'll')

    // Printing the size of each variable in bytes
    std::cout << "var1 occupies: " << sizeof(var1) << " bytes" << std::endl;  // Typically 4 bytes (int)
    std::cout << "var2 occupies: " << sizeof(var2) << " bytes" << std::endl;  // Typically 8 bytes (double)
    std::cout << "var3 occupies: " << sizeof(var3) << " bytes" << std::endl;  // Typically 4 bytes (float)
    std::cout << "var4 occupies: " << sizeof(var4) << " bytes" << std::endl;  // Typically 16 bytes (long double)
    std::cout << "var5 occupies: " << sizeof(var5) << " bytes" << std::endl;  // Typically 1 byte (char)
    std::cout << "var6 occupies: " << sizeof(var6) << " bytes" << std::endl;  // Typically 4 bytes (unsigned int)
    std::cout << "var7 occupies: " << sizeof(var7) << " bytes" << std::endl;  // Typically 8 bytes (unsigned long)
    std::cout << "var8 occupies: " << sizeof(var8) << " bytes" << std::endl;  // Typically 8 bytes (long long)
   
    return 0;
}
