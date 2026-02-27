#include <iostream>
#include <string>

class Dog {
    private:
        std::string name;
        int age;
    
    public:
        void setName( std::string n ) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }

        void bark() {
            std::cout << name << " barks!" << std::endl;
        }
};

int main () {
    Dog d;

    d.setName("Bobby");
    d.setAge(42);
    d.bark();

    return 0;
}