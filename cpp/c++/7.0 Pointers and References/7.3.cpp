#include <memory>
#include <iostream>

int main () {
    std::unique_ptr<int> uptr = std::make_unique<int>(10);
    std::cout << *uptr << std::endl;

    // std::unique_ptr<int> uptr2 = uptr; // compile error
    std::unique_ptr<int> uptr2 = std::move(uptr); // transferring ownership

    return 0;
}