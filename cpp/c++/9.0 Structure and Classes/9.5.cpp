#include <iostream>
#include <string> 

class Animal { 
    public:
        virtual void makeSound() {
            std::cout << "The animal makes a sound" << std::endl;
        }
};

class Dog : public Animal {
    public:
        void makeSound() override {
            std::cout << "Dog barks" << std::endl;
        }
};

class Cat : public Animal {
    public:
        void makeSound() override {
            std::cout << "Cat meows" << std::endl;
        }
};


int main () {
    Animal a; 
    a.makeSound();

    Dog d;
    d.makeSound();

    Cat c;
    c.makeSound();

    std::cout << std::endl;

    Animal *animals[3] = { new Animal, new Dog, new Cat};
    animals[0]->makeSound();
    animals[1]->makeSound();
    animals[2]->makeSound();
}