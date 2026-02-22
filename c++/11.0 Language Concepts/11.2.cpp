class Base {
    public:
        virtual ~Base() = default;
};


class Derived : public Base { 

};

int main() {
    int a = 10;
    float b = (float)a;
    float c = static_cast<float>(a);

    Base* base_ptr = new Derived();
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);

    int* d = new int(42);
    long e = reinterpret_cast<long>(d);

    // const int f = 10;
    // int* f_ptr = const_cast<int*>(&a);
    // *fptr = 20;

    return 0;
}