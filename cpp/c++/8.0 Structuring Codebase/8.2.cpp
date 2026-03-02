#include <iostream>

namespace outer {
    int x = 10;

    namespace inner {
        int y = 20;
    }
}

int main() {
    std::cout << "Outer x:" << outer::x << std::endl;
    std::cout << "Inner y:" << outer::inner::y << std::endl;

    return 0;
}