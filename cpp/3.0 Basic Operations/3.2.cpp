#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    if (a > 0 && b > 0) {
        std::cout << "Both values are positive.\n";
    }

    int c = 5;
    int d = -10;

    if (c > 0 || d > 0) {
        std::cout << "At least one value is positive.\n";
    }

    int e = 5;
    int f = -10;
    int g = 15;

    if (e > 0 && (f > 0 || g > 0)) {
        std::cout << "At least two values are positive.\n";
    }

    return 0;
}