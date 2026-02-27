#include <iostream>

void print( int i ) {
    std::cout << "Printing int: " << i << std::endl;
}

void print(double d) {
    std::cout << "Printing double: " << d << std::endl;
}

void print (const char* s) {
    std::cout << "Printing string: " << s << std::endl;
}

int main() {
    print(5);
    print(3.14);
    print("Hello");

    return 0;
}