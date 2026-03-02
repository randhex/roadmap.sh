#include <iostream>

int add(int a, int b) {
    return a + b;
}

class Calculator {
    public:
        // A member function to multiply two numbers
        int multiply (int a, int b ) {
            return a * b;
        }
};

int main() {
    int x = 5;
    int y = 3;

    int sum = add(x, y);
    
    std::cout << "The sum of " << x << " and " << y << " is: " << sum << "\n";

    Calculator calc;
    int product = calc.multiply(x, y);

    std::cout << "The product of " << x << " and " << y << " is: " << product;

    return 0;
}