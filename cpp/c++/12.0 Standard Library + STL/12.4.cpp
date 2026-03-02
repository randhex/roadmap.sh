#include <iostream>
#include <thread>

void my_function() {
    std::cout << "This function is executing in a separate thread.";
}

int main() {
    std::thread t(my_function);
    t.join();
    return 0;
}