#include <iostream>
#include <chrono>

void duration() {
    std::chrono::seconds sec(5);
    std::chrono::minutes min(2);
    std::chrono::hours hr(1);
}

void system_clock() {
    std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
}

int main() {
    // duration();
    system_clock();
    return 0;
}