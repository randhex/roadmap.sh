#include <iostream>
#include <stdexcept>

 int divide( int a, int b ) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }

    return a / b;
 }

 int main () {
    int num1;
    int num2;

    std::cout << "Enter 2 two numbers for division: ";
    std::cin >> num1 >> num2;

    try {
        int r = divide(num1, num2);
        std::cout << "The result is " << r << std::endl;
    } catch ( const std::exception& e ) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
 }