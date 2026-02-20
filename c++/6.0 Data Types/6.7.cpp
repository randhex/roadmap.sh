#include <iostream>
#include <typeinfo>

class Base { virtual void dummy() {}};

class Derived:  public Base { /* ... */};

int main() {
    Base* base_ptr = new Derived;

    std::cout << "Type: " << typeid(*base_ptr).name() << std::endl;

    delete base_ptr;

    return 0;
}