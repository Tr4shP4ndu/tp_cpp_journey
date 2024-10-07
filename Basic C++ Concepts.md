# Basic C++ Concepts

- [Basic C++ Concepts](#basic-c-concepts)
    - [Hello World Program](#hello-world-program)
    - [Comments](#comments)
    - [Variables and DataTypes](#variables-and-datatypes)
    - [Constants](#constants)
      - [Example](#example)
    - [Scope](#scope)
    - [Namespaces](#namespaces)
    - [Typedef and Aliases](#typedef-and-aliases)
    - [Arrays](#arrays)
      - [std::array](#stdarray)
    - [For-Loop](#for-loop)
      - [Range-Based For-Loop](#range-based-for-loop)
      - [While Loop](#while-loop)
      - [Do-While Loop](#do-while-loop)
      - [std::fill](#stdfill)
      - [Break Statement](#break-statement)
      - [Continue Statement](#continue-statement)
    - [Functions](#functions)
      - [Void Functions](#void-functions)
      - [Functions with Parameters](#functions-with-parameters)
      - [Function Overloading](#function-overloading)
      - [Recursive Function](#recursive-function)


### Hello World Program

- The first program you should write in any language is "Hello, World!". Here's how it looks in C++:

```cpp
#include <iostream> // Includes the standard input-output stream library.

int main() { // The main function where the program starts.
    std::cout << "Hello, World!" << std::endl;
    std:: cout << "Hello World!" << '\n';
    return 0;
}

// The output in the console
Hello, World!
Hello, World!
```


### Comments

```cpp
#include <iostream>

int main(){
  //This is a comment

  /*
    This
    is
    a
    multi-line
    comment
  */
  return 0;
}

```


### Variables and DataTypes

- Variables store data values. C++ is statically typed, meaning you must declare the type of variable.
- Signed vs. Unsigned Primitive Data Types
  - Signed Data Types:
    - Definition: Signed data types can represent both positive and negative values. They reserve one bit (the most significant bit) to store the sign of the number.
    - Range: The range of values for signed data types typically includes negative numbers, zero, and positive numbers. For example:
      - int (32 bits): The range is from -2,147,483,648 to 2,147,483,647.
      - short (16 bits): The range is from -32,768 to 32,767.
      - long (64 bits): The range is from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
    - Usage: Use signed data types when you need to store values that can be negative or when negative numbers are a valid part of the data being represented (e.g., temperatures, financial data).
  - Unsigned Data Types:
    - Definition: Unsigned data types can only represent non-negative values (zero and positive numbers) since they do not reserve a bit for the sign.
    - Range: The range of values for unsigned data types is typically larger in the positive range compared to their signed counterparts, as all bits are used to represent the number. For example:
      - unsigned int (32 bits): The range is from 0 to 4,294,967,295.
      - unsigned short (16 bits): The range is from 0 to 65,535.
      - unsigned long (64 bits): The range is from 0 to 18,446,744,073,709,551,615.
      - Usage: Use unsigned data types when you are certain that the values will never be negative (e.g., counting objects, indexing arrays, and representing memory addresses).

```cpp
#include <iostream>

int main(){

  // Declare and initialize signed primitive data types
  int signedIntVar = -10;                 // Signed integer
  short signedShortVar = -20;             // Signed short integer
  long signedLongVar = -30000;            // Signed long integer
  long long signedLongLongVar = -4000000; // Signed long long integer

  // Declare and initialize unsigned primitive data types
  unsigned int unsignedIntVar = 10;                 // Unsigned integer
  unsigned short unsignedShortVar = 20;             // Unsigned short integer
  unsigned long unsignedLongVar = 30000;            // Unsigned long integer
  unsigned long long unsignedLongLongVar = 4000000; // Unsigned long long integer

  // Declare and initialize other primitive data types
  float floatVar = 10.5f;              // Floating-point type
  double doubleVar = 20.99;             // Double-precision floating-point type
  char charVar = 'A';                   // Character type
  bool boolVar = true;                  // Boolean type

  // Use sizeof to get the size of each data type in bytes
  std::cout << "Size of signed int: " << sizeof(signedIntVar) << " bytes" << std::endl;                 // Size of signed int: 4 bytes
  std::cout << "Size of unsigned int: " << sizeof(unsignedIntVar) << " bytes" << std::endl;             // Size of unsigned int: 4 bytes
  std::cout << "Size of signed short: " << sizeof(signedShortVar) << " bytes" << std::endl;             // Size of signed short: 2 bytes
  std::cout << "Size of unsigned short: " << sizeof(unsignedShortVar) << " bytes" << std::endl;         // Size of unsigned short: 2 bytes
  std::cout << "Size of signed long: " << sizeof(signedLongVar) << " bytes" << std::endl;               // Size of signed long: 8 bytes
  std::cout << "Size of unsigned long: " << sizeof(unsignedLongVar) << " bytes" << std::endl;           // Size of unsigned long: 8 bytes
  std::cout << "Size of signed long long: " << sizeof(signedLongLongVar) << " bytes" << std::endl;      // Size of signed long long: 8 bytes
  std::cout << "Size of unsigned long long: " << sizeof(unsignedLongLongVar) << " bytes" << std::endl;  // Size of unsigned long long: 8 bytes

  std::cout << "Size of float: " << sizeof(floatVar) << " bytes" << std::endl;    // Size of float: 4 bytes
  std::cout << "Size of double: " << sizeof(doubleVar) << " bytes" << std::endl;  // Size of double: 8 bytes
  std::cout << "Size of char: " << sizeof(charVar) << " bytes" << std::endl;      // Size of char: 1 byte
  std::cout << "Size of bool: " << sizeof(boolVar) << " bytes" << std::endl;      // Size of bool: 1 byte

  // Displaying values of the variables
  std::cout << "\nVariable values:" << std::endl;
  std::cout << "signedIntVar: " << signedIntVar << std::endl;           // signedIntVar: -10
  std::cout << "signedShortVar: " << signedShortVar << std::endl;       // signedShortVar: -20
  std::cout << "signedLongVar: " << signedLongVar << std::endl;         // signedLongVar: -30000
  std::cout << "signedLongLongVar: " << signedLongLongVar << std::endl; // signedLongLongVar: -4000000

  std::cout << "unsignedIntVar: " << unsignedIntVar << std::endl;           // unsignedIntVar: 10
  std::cout << "unsignedShortVar: " << unsignedShortVar << std::endl;       // unsignedShortVar: 20
  std::cout << "unsignedLongVar: " << unsignedLongVar << std::endl;         // unsignedLongVar: 30000
  std::cout << "unsignedLongLongVar: " << unsignedLongLongVar << std::endl; // unsignedLongLongVar: 4000000

  std::cout << "floatVar: " << floatVar << std::endl;    // floatVar: 10.5
  std::cout << "doubleVar: " << doubleVar << std::endl;  // doubleVar: 20.99
  std::cout << "charVar: " << charVar << std::endl;      // charVar: A
  std::cout << "boolVar: " << boolVar << std::endl;      // boolVar: 1 (true)

  // string (objects that represent a sequence of text)
  std::string name = "Tr4shP4ndu";
  std::string day = "Friday";
  std::string food = "Pizza";
  std::string address = "123 Fake St.";

  std::cout << "This is your Name: " << name << '\n';       // This is your Name: Tr4shP4ndu
  std::cout << "This is the Day: " << day << '\n';          // This is the Day: Friday
  std::cout << "This is the Food: " << food << '\n';        // This is the Food: Pizza
  std::cout << "This is the Address: " << address << '\n';  // This is the Address: 123 Fake St.

  return 0;
}

```

### Constants

- The `const` keyword is used to define constants. Constants are variables whose values cannot be changed once they are assigned. This ensures that the value remains read-only throughout the program. It's a common convention to name constants in all uppercase letters.

#### Example

```cpp
#include <iostream>

int main() {
    /* 
    The `const` keyword specifies that a variable's value is constant.
    This tells the compiler to prevent anything from modifying it (read-only).
    It's a common convention to name constants using all uppercase letters.
    */

    const double PI = 3.14159;
    // PI = 420.69; // This line would cause a compilation error because PI is constant.

    double radius = 10.0;
    double circumference = 2 * PI * radius;

    std::cout << "The circumference is " << circumference << " cm." << std::endl;  // Ouput: 62.8318cm

    return 0;
}
```

### Scope

- **Block scope** refers to the visibility of variables declared within a specific block of code, which is defined by curly braces {}. Variables declared inside a block are only accessible within that block, and they are destroyed once the block is exited.
- Key Points:
  - Local Variables: Variables declared inside a block are local to that block. They cannot be accessed outside of it.
  - Lifetime: The lifetime of a block-scoped variable lasts only as long as the block is executing.
  - Nested Blocks: You can have nested blocks, and a variable in an outer block is accessible in inner blocks, but an inner block variable cannot be accessed outside its own block.
```cpp
#include <iostream>

int main() {
    int x = 10; // x is in the main block scope

    std::cout << "x in main: " << x << std::endl;

    {
        int y = 20; // y is in a new block scope
        std::cout << "y in block: " << y << std::endl;
        std::cout << "x in block: " << x << std::endl; // x is accessible here
    }

    // std::cout << "y in main: " << y << std::endl; // This would cause an error: 'y' was not declared in this scope

    return 0;
}
```

### Namespaces

-  A namespace is a declarative region that provides a scope to the identifiers (names of types, functions, variables, etc.) inside it. Namespaces help avoid name conflicts in large projects by allowing entities with the same name to coexist as long as they are in different namespaces.

```cpp
#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

using std::cout;
using std::string;

int main() {
    // using namespace first;

    /*
      Namespace:
      - Provides a solution for preventing name conflicts in large projects.
      - Allows identically named entities to coexist as long as they are in different namespaces.
      - Each entity needs a unique name within its namespace.
    */

    int x = 0;

    string name = "Bro!";
    cout << "Hello " << name << '\n';
    cout << "This is Value X without namespace: " << x << '\n'; // Output is 0 since it's using the local x
    cout << "This is Value X with namespace first: " << first::x << '\n'; // Output is 1, using first namespace
    cout << "This is Value X with namespace second: " << second::x << '\n'; // Output is 2, using second namespace

    return 0;
}
```

### Typedef and Aliases

- The `typedef` keyword is used to create an alias for an existing data type. This can improve code readability, reduce typos, and make the code easier to maintain. While `typedef` is still widely used, the modern `using` keyword is often preferred, especially when working with templates.

```cpp
#include <iostream>
#include <vector>

// Using typedef to create aliases for existing data types
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main() {
    /*
      Typedef:
      - Reserved keyword used to create an alias for another data type.
      - Creates a new identifier for an existing type.
      - Enhances readability and reduces typos.
      - Useful when there is a clear benefit, such as long or complex types.
      - In modern C++, 'using' is preferred over 'typedef', especially with templates.
    */

    //pairlist_t pairlist;  // Example of a typedef alias for a complex type
    text_t firstName = "Tr4shP4ndu";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
```
### Arrays

 - A raw array is a built-in array type in C++. It has a fixed size defined at compile time, and it does not provide additional functionality beyond basic indexing. Raw arrays can lead to issues such as memory leaks and buffer overflows if not managed carefully.
 - Characteristics:
   - Size must be known at compile time.
   - No bounds checking.
   - Requires manual memory management if dynamically allocated.

```cpp
#include <iostream>

int main() {
    int rawArray[5] = {10, 20, 30, 40, 50};// Declare and initialize a raw array

    // Accessing elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << rawArray[i] << std::endl;
    }

    // Unsafe operation example (out of bounds)
    // std::cout << rawArray[5]; // Uncommenting this line would lead to undefined behavior

    return 0;
}

// OR

#include <iostream>
#include <numeric>
#include <iterator>

int main(){
  int ids[100];
  std::iota(std::begin(ids), std::end(ids), 0);
  for(int i=0; i < 100; i++){
    std::cout << ids[i] << std::endl;
  }
  return 0;
}
```

#### std::array

- std::array is a part of the C++ Standard Library, introduced in C++11. It wraps a raw array and provides a safer and more feature-rich interface. It includes size information, bounds checking through member functions, and support for standard algorithms.
- Characteristics:
  - Fixed size known at compile time (like raw arrays).
  - Provides member functions such as size(), at(), and iterators.
  - Safer and easier to use compared to raw arrays.

```cpp
#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main(){
  std::array<int, 100> ids;
  std::iota(std::begin(ids), std::end(ids), 0);
  // ids.at(10000) = 9; // this is would gives us out of range error
  ids.at(99) = 9; // all values from 0 to 108 plus 9
  for(int i=0; i < 100; i++){
    std::cout << ids[i] << std::endl;
  }
  return 0;
}
```

### For-Loop

```cpp
#include <iostream>
#include <array>

int main() {
    int arr[] = {1,3,5};
    std::array<int, 3> arr2{1,3,5};
    for(int i=0; i<arr2.size(); i=i+1){ // i=i+1 can be done this way i++
                                        // Loop runs 3 times by using the arr2.size
      std::cout << arr2[i] << std::endl;
    }
    return 0;
}
```

#### Range-Based For-Loop

- Introduced in C++11, the range-based for-loop simplifies iteration over arrays, containers, or any range. It automatically iterates over each element.

```cpp
#include <iostream>
#include <array>

int main() {
    int arr[] = {1,3,5};
    std::array<int, 3> arr2{1,3,5};
    for(int element: arr2){ // simply change int to auto& to auto detect the primitive
      std::cout << element << std::endl;
    }
    return 0;
}

```

#### While Loop

- A while loop continues as long as its condition is true. The condition is checked before each iteration.

```cpp
#include <iostream>

int main() {
    int i = 0;
    while (i < 5) { // Loop continues while i is less than 5
        std::cout << "While loop iteration: " << i << std::endl;
        ++i;
    }
    return 0;
}
```


#### Do-While Loop
- A do-while loop is similar to a while loop, but the condition is checked after the code block has executed, ensuring that the loop runs at least once.

```cpp
#include <iostream>

int main() {
    int i = 0;
    do {
        std::cout << "Do-while loop iteration: " << i << std::endl;
        ++i;
    } while (i < 5); // Loop continues while i is less than 5
    return 0;
}
```

#### std::fill

- std::fill is a function from the <algorithm> library used to fill a range (such as an array or container) with a specific value.

```cpp
#include <iostream>
#include <array>
#include <algorithm> // for std::fill

int main() {
    std::array<int, 5> numbers; // Uninitialized array

    // Fill array with the value 42
    std::fill(numbers.begin(), numbers.end(), 42);

    for (int num : numbers) {
        std::cout << "Array element: " << num << std::endl;
    }

    return 0;
}
```

#### Break Statement
- The break statement is used to immediately exit a loop, regardless of its condition. When break is encountered, the loop stops executing and control is transferred to the first statement following the loop.

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            std::cout << "Break at i = " << i << std::endl;
            break; // Exit the loop when i equals 5
        }
        std::cout << "Current value of i: " << i << std::endl;
    }
    std::cout << "Loop exited." << std::endl;
    return 0;
}
```

#### Continue Statement

- The continue statement is used to skip the current iteration of the loop and proceed to the next iteration. When continue is encountered, the remaining code inside the loop for that iteration is skipped, and the loop proceeds with the next iteration.

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0) {
            continue; // Skip the rest of the loop body for even numbers
        }
        std::cout << "Odd number: " << i << std::endl;
    }
    return 0;
}
```

### Functions

- Functions are reusable blocks of code that perform specific tasks. Functions help to structure your program, avoid repetition, and make code more modular and readable.
- Components of a Function:
  - Return type: The data type of the value the function returns (e.g., int, double, void).
  - Function name: A unique identifier to call the function.
  - Parameters: Optional inputs that the function accepts (also called arguments).
  - Function body: The block of code that defines what the function does.
  - Return statement: Specifies the value to return (if applicable).


```cpp
#include <iostream>

// Function declaration
int add(int num1, int num2) {
    return num1 + num2; // Return the sum of num1 and num2
}
int main() {
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << add(1, 2) << std::endl;
    return 0;
}
```

Forward declaration

```cpp
#include <iostream>
// Foward Declared
// Function declaration
int add(int a, int b);

int main() {
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << add(1, 2) << std::endl;
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2; // Return the sum of num1 and num2
}
```

#### Void Functions

- Void functions do not return a value.
- Useful for performing tasks that do not need to send back a result.

```cpp
#include <iostream>

void printMessage() {
    std::cout << "Hello, this is a void function!" << std::endl;
}

int main() {
    printMessage(); // Call to void function
    return 0;
}
```

#### Functions with Parameters

- Functions can take parameters to process and return a value based on them.

```cpp
#include <iostream>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int product = multiply(4, 5);
    std::cout << "The product is: " << product << std::endl;
    return 0;
}
```

#### Function Overloading

- You can create multiple functions with the same name but different parameter lists.
- The correct function is chosen based on the arguments provided during the function call.

```cpp
#include <iostream>

// Function to add integers
int add(int x, int y) {
    return x + y;
}

// Overloaded function to add doubles
double add(double x, double y) {
    return x + y;
}

int main() {
    std::cout << "Integer sum: " << add(3, 4) << std::endl;
    std::cout << "Double sum: " << add(3.5, 4.5) << std::endl;
    return 0;
}
```

#### Recursive Function

- Recursive functions are functions that call themselves in order to solve a problem. This technique is useful for tasks that can be broken down into smaller, similar tasks. The key to writing a recursive function is to include a base case that stops the recursion and a recursive case that reduces the problem in each step.
- Components of a Recursive Function
  - Base Case: The condition under which the recursion stops. It prevents the function from calling itself indefinitely.
  - Recursive Case: The part of the function where it calls itself with a smaller or simpler argument.
- Example: Factorial of a Number
  - Let's look at a classic example of recursion: calculating the factorial of a number.
  - Mathematical Definition
  - The factorial of a number 𝑛 (written as 𝑛!) is defined as:
    - 𝑛!=𝑛×(𝑛−1)!for 𝑛>0
    - 0!=1

```cpp
#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) { // Base Case: When n is 0 or 1, the function returns 1.
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call - Recursive Case: The function calls itself with n - 1, reducing the problem size by one in each step.

        /*
        For example, to calculate factorial(5), the recursive calls look like this:
        5 * factorial(4)
        4 * factorial(3)
        3 * factorial(2)
        2 * factorial(1)
        The base case is reached at factorial(1), which returns 1.
        */
    }
}

int main() {
    int number = 5;
    std::cout << "Factorial of " << number << " is: " << factorial(number) << std::endl;
    return 0;
}
```

Bit simpler way

```cpp
#include <iostream>

int coutdown(int n){
  // Base Case
  if(n==0){
    std::cout << "0...Blast Off!!!" << std:endl;
    return 0;
  }
  // Recursive case
  std::cout << n << std::endl;
  return countdown(n-1)l
}

int main(){
  countdown(5);
  return 0;
}
```

Call Stack 
```cpp
#include <iostream>

int coutdown(int n){
  // Base Case
  if(n==0){
    std::cout << "0...Blast Off!!!" << std:endl;
    return 0;
  }
  // Recursive case
  std::cout << n << std::endl;
  return countdown(n-1)l
}

int main(){
  countdown(500000);
  return 0;
}
```

- Call Stack: When a function is called in C++, it gets added to a special area of memory called the call stack. This stack keeps track of each function call and stores important information like:
  - The return address, which tells the program where to go after the function finishes.
  - The current values of variables, like the argument values passed to the function.
- Stack Frame: Each function call creates a new stack frame, which is a block of memory that holds the function's data (like the return address and the values of its variables).
- Recursion and Growing the Stack: When a recursive function (like a countdown function) calls itself, a new stack frame is created for each recursive call. For example:
  - First, the function countdown(5) runs, creating a stack frame.
  - Then it calls countdown(4), creating another stack frame, and so on.
  - This process continues until a stopping condition is met, such as countdown(0).
- Stack Limitations: As the stack grows with each recursive call, it can take up a lot of memory. If the recursion goes too deep (for example, if it keeps calling itself many thousands or millions of times), the stack might run out of space. When this happens, the program might crash due to a stack overflow error.
- Heap vs. Stack: The stack is just one part of the memory that your program uses. Another part is the heap, where dynamically allocated memory lives. If the recursive calls grow too large, they might overflow into other parts of memory, causing errors.
- Key Point: Be careful with recursive functions in C++. If you don’t have a clear stopping condition, or if you call the function too many times, you might run into stack overflow issues.

Other example - Fibonacci Sequence

- The Fibonacci sequence is another common example of recursion. It is defined as:
  - F(0)=0
  - F(1)=1
  - F(n)=F(n−1)+F(n−2) for 𝑛>1

```cpp
#include <iostream>

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n) {
    if (n <= 1) { // Base case: F(0) = 0 and F(1) = 1 - Base Case: When n is 0 or 1, the function returns n.
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call - Recursive Case: The function calls itself with n - 1 and n - 2, The recursive calls continue until the base cases are reached.
    }
}

int main() {
    int number = 6;
    std::cout << "Fibonacci of " << number << " is: " << fibonacci(number) << std::endl;
    return 0;
}
```
- Pros and Cons of Recursive Functions
  - Pros:
    - Simpler Code: Recursive solutions can be more straightforward and easier to understand for problems that have a recursive nature.
    - Natural Representation: Recursion is a natural way to represent problems like tree traversal, factorial, Fibonacci, etc.
  - Cons:
    - Performance: Recursive functions can be inefficient if they involve repeated calculations (like the Fibonacci example).
    - Memory Overhead: Each recursive call adds a new frame to the call stack, which can lead to a stack overflow if the recursion is too deep.
- Best Practices for Recursive Functions
  - Always include a base case to stop the recursion.
  - Optimize your code to avoid redundant calculations (e.g., use memoization for the Fibonacci sequence).
  - Use recursion for problems that are naturally recursive, like tree traversal, combinatorial problems, and divide-and-conquer algorithms.
