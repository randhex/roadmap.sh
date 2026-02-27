#include <iostream>

class Person {
    public:
        std::string name;
        int age;
        float height;
};

int main() {
    Person p1;
    
    p1.name = "John Doe";
    p1.age = 19;
    p1.height = 44.1;

    std::cout << p1.name << " " <<  p1.age << " " << p1.height << std::endl;

    return 0;
}