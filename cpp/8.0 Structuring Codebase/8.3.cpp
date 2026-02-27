#include <iostream>
#include <string>

namespace animals {
    std::string dog = "Bobby";
    std::string cat = "Bobbo";
}

int main() {
    using animals::dog;

    std::cout << "Dog's name: " << dog << std::endl;

    return 0;
}