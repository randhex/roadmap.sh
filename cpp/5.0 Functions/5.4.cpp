#include <iostream>

int main() {
    auto printHello = []() {
        std::cout << "Hello, World" << std::endl;
    };

    printHello();
    
    auto add = [](int a, int b) {
        return a + b;
    };

    std::cout <<  "The sum of 5 and 10 is: " << add(5, 10) << std::endl;

    int multiplier = 3;
    auto times = [multiplier](int a) {
        return a * multiplier;
    };

    std::cout << "The product of " << multiplier << " and " << "5 is: " << times(5) << std::endl;

    int expiresInDays = 31;
    auto updateDays = [&expiresInDays](int newDays) {
        expiresInDays = newDays;
    };

    std::cout << "Expires in: " << expiresInDays  << std::endl;
    updateDays(30);
    std::cout << "Expires in: " << expiresInDays  << std::endl;

    return 0;
}