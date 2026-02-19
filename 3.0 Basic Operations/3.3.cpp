#include <iostream>

int main() {

    int a = 5 & 3;
    std::cout << "Bitwise AND: " << a << "\n";


    int b = 5 | 3;
    std::cout << "Bitwise OR: " << b << "\n";

    int c = 5 ^ 3;
    std::cout << "Bitwise XOR: " << c << "\n";
    
    int d = ~5;
    std::cout << "Bitwise NOT: " << d << "\n";

    int e = 5 << 1;
    std::cout << "Bitwise Left Shift: " << e << "\n";
    
    int f = 5 >> 1;
    std::cout << "Bitwise Right Shift: " << f << "\n";

    return 0;
}