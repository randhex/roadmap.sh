#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = { 
        1,
        2,
        3,
        4,
        5,
        3,
        3
    };

    numbers.erase(
        std::remove(
            numbers.begin(), 
            numbers.end(),
            3
        ),
        numbers.end()
    );

    for (int number : numbers) {
        std::cout << number << std::endl;
    }

    return 0;
}