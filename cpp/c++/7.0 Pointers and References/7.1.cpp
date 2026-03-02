#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funcptr) (int, int) = add;
    int result = funcptr(4, 5);

    std::cout << result << std::endl;

    return 0;
}