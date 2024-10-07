#include <iostream>

int main() {
    // Basic arithmetic operations
    int number1 {2}, number2 {7};
    
    // Addition
    std::cout << "Addition: " << number1 + number2 << std::endl;  // 9
    
    // Subtraction
    std::cout << "Subtraction (number2 - number1): " << number2 - number1 << std::endl;  // 5
    std::cout << "Subtraction (number1 - number2): " << number1 - number2 << std::endl;  // -5
    
    // Multiplication
    std::cout << "Multiplication: " << number1 * number2 << std::endl;  // 14
    
    // Division
    std::cout << "Division: " << number2 / number1 << std::endl;  // 3
    
    // Modulus
    std::cout << "Modulus (number2 % number1): " << number2 % number1 << std::endl;  // 1
    std::cout << "Modulus (31 % 10): " << 31 % 10 << std::endl;  // 1

    // Complex expressions with arithmetic operations
    int a {6}, b {3}, c {8}, d {9}, e {3}, f {2}, g {5};
    
    std::cout << "Complex expression 1: " << a + b * c - d / e - f + g << std::endl;  // 30
    std::cout << "Complex expression 2: " << a / b * c + d - e + f << std::endl;  // 24
    std::cout << "Complex expression 3 (with parentheses): " << (a + b) * c - d / e - f + g << std::endl;  // 72

    // Increment and decrement operations
    int value {5};
    
    // Increment and decrement by one
    value += 1;  // Equivalent to value = value + 1
    std::cout << "Increment by one: " << value << std::endl;  // 6
    
    value -= 2;  // Equivalent to value = value - 1 (again)
    std::cout << "Decrement by one: " << value << std::endl;  // 4
    
    // Postfix increment and decrement
    value = 5;
    std::cout << "Postfix increment: " << value++ << std::endl;  // 5
    std::cout << "After postfix increment: " << value << std::endl;  // 6
    
    value = 5;
    std::cout << "Postfix decrement: " << value-- << std::endl;  // 5
    std::cout << "After postfix decrement: " << value << std::endl;  // 4
    
    // Prefix increment and decrement
    value = 5;
    std::cout << "Prefix increment: " << ++value << std::endl;  // 6
    
    value = 5;
    std::cout << "Prefix decrement: " << --value << std::endl;  // 4
    
    // Compound assignment operators
    value = 45;
    
    value += 5;
    std::cout << "After += 5: " << value << std::endl;  // 50
    
    value -= 5;
    std::cout << "After -= 5: " << value << std::endl;  // 45
    
    value *= 2;
    std::cout << "After *= 2: " << value << std::endl;  // 90
    
    value /= 3;
    std::cout << "After /= 3: " << value << std::endl;  // 30
    
    value %= 11;
    std::cout << "After %= 11: " << value << std::endl;  // 8
    
    return 0;
}
