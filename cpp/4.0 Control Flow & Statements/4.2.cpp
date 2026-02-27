#include <iostream>

int main() {
    int magic;

    std::cout << "Enter magic number: ";
    std::cin >> magic;

    if (magic == 42) {
        goto skip;
    }

    // if-else
    int age;

    std::cout << "Enter you age: ";    
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You can vote!" << std::endl;
    } else {
        std::cout << "Too young to vote." << std::endl;
    }

    // switch
    int day;

    std::cout << "Enter a day (1-7): ";
    std::cin >> day;

    switch (day) {
        case 1: std::cout << "Monday"; break;
        case 2: std::cout << "Tuesday"; break;
        case 3: std::cout << "Wednesday"; break;
        case 4: std::cout << "Thursday"; break;
        case 5: std::cout << "Friday"; break;
        case 6: std::cout << "Saturday"; break;
        case 7: std::cout << "Sunday"; break;
        default: std::cout << "Invalid day";
    }

    skip:
        if (magic == 42) {
            std::cout << "Skipped..." << std::endl;
        }

    return 0;
}