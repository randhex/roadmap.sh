#include <iostream>

int main() {
    int a = 10.1;
    int b = 5.5;

    // addition
    int sum = a + b; 

    std::cout << "The sum of " << a << " and " << b << " is: " << sum << "\n" ;

    // subtraction
    int difference = a - b;
    
    std::cout << "The difference of " << a << " and " << b << " is: " << difference << "\n" ;
    
    // multiplcation
    int product = a * b;

    std::cout << "The product of " << a << " and " << b << " is: " << product << "\n";

    // division
    int quotient = a / b;

    std::cout << "The quotient of " << a << " and " << b << " is: " << quotient << "\n";
    
    // floating-point division
    float fquotient = float(a) / float(b);

    std::cout << "The fquotient of " << a << " and " << b << " is: " << quotient << "\n";

    // modulus
    int remainder = a % b; 
    std::cout << "The remainder of " << a << " and " << b << " is: " << quotient << "\n";

    return 0;
}