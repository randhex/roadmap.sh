#include <iostream>

struct Person {
    std::string name;
    int age;
    float height;    
};

int main() {
    Person p1 = {"John Doe", 30, 5.9};

    std::cout << p1.name << " " <<  p1.age << " " << p1.height << std::endl;

    return 0;
}