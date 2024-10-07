#include <iostream>
#include <iomanip> // For std::boolalpha

int main() {
    // Boolean variables
    bool is_raining {false};
    bool is_sunny {true};

    // Conditional statements using booleans
    if (is_raining) {
        std::cout << "Take an umbrella!" << std::endl;
    } else {
        std::cout << "No need for an umbrella." << std::endl;
    }

    if (is_sunny) {
        std::cout << "It's a sunny day!" << std::endl;
    } else {
        std::cout << "It's not sunny today." << std::endl;
    }

    // Display size of bool type
    std::cout << "sizeof(bool): " << sizeof(bool) << " bytes" << std::endl;

    // Printing out a bool as integer (1 for true, 0 for false)
    std::cout << std::endl;
    std::cout << "is_raining (as integer): " << is_raining << std::endl;   // Output: 0
    std::cout << "is_sunny (as integer): " << is_sunny << std::endl;     // Output: 1
    std::cout << "------------------------\n";

    // Printing out bool values as true/false using std::boolalpha
    std::cout << std::endl;
    std::cout << std::boolalpha; // Enables printing of bool values as "true" or "false"
    std::cout << "is_raining (as boolean): " << is_raining << std::endl;   // Output: false
    std::cout << "is_sunny (as boolean): " << is_sunny << std::endl;       // Output: true
    std::cout << "------------------------\n";

    // Boolean expressions
    bool is_weekend = true;
    bool has_homework = false;

    // Using logical operators
    if (is_weekend && !has_homework) {
        std::cout << "Relax, it's the weekend and no homework!" << std::endl;
    } else if (is_weekend && has_homework) {
        std::cout << "It's the weekend, but you have homework to do." << std::endl;
    } else {
        std::cout << "It's a regular day." << std::endl;
    }

    // Additional boolean expressions
    bool is_tired = true;
    bool is_bored = false;

    std::cout << std::endl;
    std::cout << "is_tired && is_bored: " << (is_tired && is_bored) << std::endl;  // Output: 0 (false)
    std::cout << "is_tired || is_bored: " << (is_tired || is_bored) << std::endl;  // Output: 1 (true)
    std::cout << "!is_tired: " << (!is_tired) << std::endl;                        // Output: 0 (false)
    std::cout << "------------------------\n";
    
    return 0;
}
