#include <iostream>

// Function prototype
int multiplyNumbers(int a, int b);

int main() {
    int x = 5;
    int y = 5;
    int r = multiplyNumbers(x, y);

    std::cout << "The product of " << x << " and " << y << " is: " << r;
    
    return 0;
}

int multiplyNumbers(int x, int y) {
    int product = x * y;
    return product;
}