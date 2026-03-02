#include <iostream>
#include <string>

class Animal {
    public:
        void breathe() {
            std::cout << "I can't breathe" << std::endl;
        }
};

class Dog  : public Animal {
    public:
        void bark () {
            std::cout << "Dog barks" << std::endl;
        }
};


int main() {
    Dog d;

    d.breathe();
    d.bark();

    return 0;   
}