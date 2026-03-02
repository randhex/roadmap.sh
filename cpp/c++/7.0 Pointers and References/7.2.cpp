#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    std::cout << "Before Swap: x = " << x << " y = " << y << '\n'; // Outputs 5 10

    swap(x, y);
    std::cout << "After Swap: x = " << x << " y = " << y << '\n';  // Outputs 10 5

    return 0;
}