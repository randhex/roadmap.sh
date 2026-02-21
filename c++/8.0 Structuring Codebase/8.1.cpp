#include <iostream>

namespace animals {
    std::string dog = "Bobby";
    std::string cat = "Bobbo";
}

int main () {
    std::cout << "Dog's name: " << animals::dog << '\n';
    std::cout << "Cat's name: " << animals::cat << '\n';

    return 0;
}