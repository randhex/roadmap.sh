#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int result = max<int>(10, 20);
    std::cout << result;
    return 0;
}