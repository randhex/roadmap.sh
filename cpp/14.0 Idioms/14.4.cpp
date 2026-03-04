#include "14.4.hpp"
#include <iostream>

class MyClass_Impl {
	public:
		void some_method() {
			std::cout << "Implementation method called";
		}
};

MyClass::MyClass() : pimpl(new MyClass_Impl()) {} // Constructor
MyClass::~MyClass() { delete pimpl; } // Destructor

void MyClass::some_method() {
	pimpl->some_method();
}
