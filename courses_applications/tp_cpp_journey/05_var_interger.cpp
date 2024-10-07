#include <iostream>
#include <iomanip>

int main() {

    // Integer representation in different formats
    int decimal = 15;
    int octal = 017;
    int hexadecimal = 0x0F;
    int binary = 0b00001111;

    std::cout << "Whole Numbers\n";
    std::cout << "Decimal: " << decimal << "\n";          // Output: 15
    std::cout << "Octal: " << octal << "\n";              // Output: 15
    std::cout << "Hexadecimal: " << hexadecimal << "\n";  // Output: 15
    std::cout << "Binary: " << binary << "\n";            // Output: 15
    std::cout << "-------------------------------------\n";

    // Examples of using integers
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion = 2.9;

    std::cout << "Example of Using Integers\n";
    std::cout << "Bike count: " << bike_count << "\n";           // Output: 2
    std::cout << "Truck count: " << truck_count << "\n";           // Output: 7
    std::cout << "Vehicle count: " << vehicle_count << "\n";        // Output: 9
    std::cout << "Narrowing conversion: " << narrowing_conversion << "\n"; // Output: 2
    std::cout << "sizeof int: " << sizeof(int) << " bytes\n";       // Output: 4 bytes (on most systems)
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << " bytes\n"; // Output: 4 bytes
    std::cout << "-------------------------------------\n";

    // Signed/Unsigned Integer Examples
    int signed_int = 55;
    unsigned int unsigned_int = 77;

    std::cout << "Signed/Unsigned Integer\n";
    std::cout << "Signed int: " << signed_int << " , size: " << sizeof(signed_int) << " bytes\n";  // Output: 4 bytes
    std::cout << "Unsigned int: " << unsigned_int << " , size: " << sizeof(unsigned_int) << " bytes\n"; // Output: 4 bytes
    std::cout << "-------------------------------------\n";

    // Signed/Unsigned Short Integer Examples
    short signed_short = -32768;
    unsigned short unsigned_short = 456;

    std::cout << "Signed/Unsigned Short Integer\n";
    std::cout << "Signed short: " << signed_short << " , size: " << sizeof(signed_short) << " bytes\n"; // Output: 2 bytes
    std::cout << "Unsigned short: " << unsigned_short << " , size: " << sizeof(unsigned_short) << " bytes\n"; // Output: 2 bytes
    std::cout << "-------------------------------------\n";

    // Signed/Unsigned Long Integer Examples
    long signed_long = 88;
    unsigned long unsigned_long = 44;

    std::cout << "Signed/Unsigned Long Integer\n";
    std::cout << "Signed long: " << signed_long << " , size: " << sizeof(signed_long) << " bytes\n"; // Output: 8 bytes (on most systems)
    std::cout << "Unsigned long: " << unsigned_long << " , size: " << sizeof(unsigned_long) << " bytes\n"; // Output: 8 bytes
    std::cout << "-------------------------------------\n";

    // Signed/Unsigned Long Long Integer Examples
    long long signed_long_long = 888;
    unsigned long long unsigned_long_long = 1234;

    std::cout << "Signed/Unsigned Long Long Integer\n";
    std::cout << "Signed long long: " << signed_long_long << " , size: " << sizeof(signed_long_long) << " bytes\n"; // Output: 8 bytes
    std::cout << "Unsigned long long: " << unsigned_long_long << " , size: " << sizeof(unsigned_long_long) << " bytes\n"; // Output: 8 bytes
    std::cout << "-------------------------------------\n";

    // Floating-point variables
    float num_float = 1.12345678901234567890f;
    double num_double = 1.12345678901234567890;
    long double num_long_double = 1.12345678901234567890L;

    std::cout << "Floating-Point Variables\n";
    std::cout << "sizeof float: " << sizeof(float) << " bytes\n";          // Output: 4 bytes
    std::cout << "sizeof double: " << sizeof(double) << " bytes\n";        // Output: 8 bytes
    std::cout << "sizeof long double: " << sizeof(long double) << " bytes\n"; // Output: 16 bytes (on most systems)
    std::cout << "-------------------------------------\n";

    // Precision of floating-point types
    std::cout << "Precision\n";
    std::cout << std::setprecision(20);
    std::cout << "num_float is: " << num_float << "\n";       // Output: 1.1234568357467651 (approximate)
    std::cout << "num_double is: " << num_double << "\n";     // Output: 1.1234567890123459 (approximate)
    std::cout << "num_long_double is: " << num_long_double << "\n"; // Output: 1.1234567890123458 (approximate)
    std::cout << "-------------------------------------\n";

    // Float problems: The precision is usually too limited
    float large_float = 192400023.0f;

    std::cout << "large_float: " << large_float << "\n"; // Output: 192400024 (approximate due to precision loss)
    std::cout << "------------------------\n";

    // Scientific notation examples
    double number5 = 192400023;
    double number6 = 1.92400023e8;
    double number7 = 1.924e8;
    double number8 = 0.00000000003498;
    double number9 = 3.498e-11;

    std::cout << "Scientific Notation\n";
    std::cout << "number5: " << number5 << "\n";   // Output: 192400023
    std::cout << "number6: " << number6 << "\n";   // Output: 192400023
    std::cout << "number7: " << number7 << "\n";   // Output: 192400000
    std::cout << "number8: " << number8 << "\n";   // Output: 3.498e-11
    std::cout << "number9: " << number9 << "\n";   // Output: 3.498e-11
    std::cout << "------------------------\n";

    // Infinity and NaN (Not a Number)
    std::cout << "\nInfinity and NaN\n";

    double number10 = -5.6;
    double number11 = 0.0;

    // Infinity example: division by zero
    double result = number10 / number11;

    std::cout << number10 << " / " << number11 << " yields " << result << "\n";  // Output: -inf
    std::cout << result << " + " << number10 << " yields " << result + number10 << "\n"; // Output: -inf
    std::cout << "------------------------\n";

    // NaN example: zero divided by zero
    result = number11 / number11;

    std::cout << number11 << " / " << number11 << " = " << result << "\n";  // Output: nan
    std::cout << "------------------------\n";

    return 0;
}
