#include <iostream>

int main() {
    // integer
    int num = 1;

    // Floating-Point
    float pi = 3.14f;

    // Character
    char letter = 'A';

    // Boolean
    bool is_cpp_great = true;

    // Arrays
    int numbers[5]  = { 1, 2, 3, 4, 5 };
    int scores[10] = { 100, 200, 300 }; // partially initialized array
    int allZero[0] = {}; 

    // Pointers
    int n = 42;
    int* pNum = &n;
    std::cout << pNum << std::endl;

    return 0;
}