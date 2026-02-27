#include <iostream>
#include <type_traits>

template <typename T, typename = void>
struct foo_impl {
    void operator()(T t) {
        std::cout << "Called when T is not arithmentic" << std::endl;
    }
};

template <typename T>
struct foo_impl<
    T, std::enable_if_t<
        std::is_arithmetic<T>::value
    >
> {
   void operator() (T t) {
    std::cout << "Called when T is arithmetic" << std::endl;
   } 
};

template <typename T>
void foo(T t) {
    foo_impl<T>()(t);
}

int main() {
    int x = 5;
    foo(x);

    std::string y = "example";
    foo(y);

    return 0;
}