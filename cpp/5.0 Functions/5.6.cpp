#include <iostream>

template<typename T>
void print(const T& value) {
    std::cout << "Printing value: " << value << std::endl;
}

int main() {
    print(42);
    print(3.1412341);
    print("Hello");

    return 0;
}