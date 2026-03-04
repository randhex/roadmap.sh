#include <iostream>

template <typename Derived>
class Base {
	public:
		void interface() {
			std::cout << "Default implementation in Base" << std::endl;
		}
};

class Derived1 : public Base<Derived1> {
	public:
		void interface() {
			std::cout << "Custom implmentation in Base" << std::endl;
		}
};

class Derived2 : public Base<Derived2> {
	// No custom implmentation, so Base::implementation will be used 
};


int main() {
	Derived1 d1;
	d1.interface();
	
	Derived2 d2;
	d2.interface();

	return 0;
}
