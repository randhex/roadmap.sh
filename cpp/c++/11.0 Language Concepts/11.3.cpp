#include <cassert>
#include <iostream>

void modifyVariable(int* ptr) {
    *ptr = 42;
}

int main() {
    const int original_value = 10;
    int* non_const_value_ptr = const_cast<int*>(&original_value);

    std::cout << "Original value: " << original_value << std::endl;

    modifyVariable(non_const_value_ptr);
    std::cout << "Modified value: " << *non_const_value_ptr << std::endl;

    assert(non_const_value_ptr == &original_value);

    return 0;
}