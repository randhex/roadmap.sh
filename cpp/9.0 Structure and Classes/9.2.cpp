#include <iostream>
#include <string>

class Dog {
    public: 
        std::string name;
        int age;

        void bark() {
            std::cout << name << " barks!" << std::endl;
        }
};

int main() {
    Dog d;

    d.name = "Bobby";
    d.age = 4;
    d.bark();
    

    return 0;
}