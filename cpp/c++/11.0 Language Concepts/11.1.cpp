#include <iostream>
#include <vector>

int main() {
    int myInt = 5;
    
    auto myAutoInt = 5;

    std::vector<int> myVector = { 10, 11, 12, 13, 14 };

    for (std::vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++) {
        std::cout << *i << std::endl;
    }

    std::cout << std::endl;

    for (auto i = myVector.begin(); i != myVector.end(); i++) {
        std::cout << *i << std::endl;
    }

    return 0;
}