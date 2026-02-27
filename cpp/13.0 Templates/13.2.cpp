#include <iostream>

template <typename T>
T sum(T t) {
    return t;
}

template <typename T, typename... Args>
T sum(T t, Args... args) {
    return t + sum(args...);
}

int main() {
    int result = sum(1, 2, 3, 4, 5);
    std::cout << "The sum is: " << result << '\n';
    return 0;
}