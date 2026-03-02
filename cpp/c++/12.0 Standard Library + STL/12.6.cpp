#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void print_block(int n, char c) {
    {
        std::unique_lock<std::mutex> locker(mtx);

        for (int i = 0; i < n; i++) {
            std::cout << c;
        }       

        std::cout << '\n';
    }
}

int main() {
    std::thread t1(print_block, 5, '*');
    std::thread t2(print_block, 10, '$');

    t1.join();
    t2.join();
    return 0;

}