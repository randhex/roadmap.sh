#include <iostream>

class Animal {
    public:
        void eat() {
            std::cout << "I can eat!" << std::endl;
        }
};

class Mammal {
    public:
        void breath() {
            std::cout << "I cant breath" << std::endl;
        }
};

class Dog : public Animal, public Mammal { 
    public:
        void bark() {
            std::cout << "I can bark! Woof woof." << std::endl;
        }
};

int main() {
    Dog d;

    d.eat();
    d.breath();
    d.bark();
    
    return 0;
}