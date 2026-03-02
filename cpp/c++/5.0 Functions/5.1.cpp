#include <iostream>

int addNumber(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5;
    int y = 10;
    int r = addNumber(x, y);

    std::cout << "The sum of " << x << " and " << y << " is: " << r;
 
    return 0;
}