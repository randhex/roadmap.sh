#include "8.5.hpp"
#include <iostream>

void Example::printMessage() {
    std::cout << "Hello, code splitting!" << std::endl;
}

int main() {
    Example ex;

    ex.printMessage();

    return 0;
}