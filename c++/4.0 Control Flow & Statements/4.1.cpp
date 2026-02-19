#include <iostream>

int main() {

    // For loop
    std::cout << "For loop: \n";

    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration: " << i << "\n";
    }

    // While loop
    std::cout << "While loop: \n";
    
    int y = 0;
    while (y < 5) {
        std::cout << "Iteration: " << y << "\n";
        y++;
    }


    // Do-While loop
    std::cout << "Do-While loop: \n";

    int z = 0;
    do {
        std::cout << "Iteration: " << z << "\n";
        z++;
    } while (z < 5);

    return 0;
} 