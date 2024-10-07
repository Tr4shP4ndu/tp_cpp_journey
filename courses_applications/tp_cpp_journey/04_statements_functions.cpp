#include <iostream>

// function with our paramenters, which then can be used in our main function
int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl; // output: 13
    std::cout << "Second number : " << second_number << std::endl; // output: 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // output: 20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; // output: 32

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(3,42) << std::endl;


    return 0;
}
