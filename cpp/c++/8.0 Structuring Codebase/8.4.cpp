#include <iostream>
#include <string>

namespace animals {
    std::string dog = "Bobby";
    std::string cat = "Bobbo";
}

int main() {
    using namespace animals;

    std::cout << "Dog's name: " << dog << std::endl;
    std::cout << "Cat's name: " << cat << std::endl;

    return 0;
}