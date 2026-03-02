#include <iostream>


// Generic template
template <typename T>
class MyContainer { 
    public:
        void print() {
            std::cout << "Generic container." << std::endl;
        }
};

// Full template specialization for int 
template <>
class MyContainer<int> {
    public:
        void print() {
            std::cout << "Container for integers." << std::endl;
        }
};

int main() {
    MyContainer<double> d;
    MyContainer<int> i;

    d.print();
    i.print();

    return 0;
}
