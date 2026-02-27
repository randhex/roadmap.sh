#include <iostream>
#include <thread>

void sum(int a, int b) {
    std::cout << "The sum is: " << a + b << std::endl;
}

int main() {
    std::thread t(sum, 3, 5);
    t.join();
    return 0;
}