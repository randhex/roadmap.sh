#include <iostream>
#include <vector>
#include <map>

void vector() {
    std::vector<int> vec = { 1, 2, 3, 4};

    vec.push_back(5);

    std::cout << "Vector contains: ";
    
    for (int x : vec) {
        std::cout << x << ' ';
    }
}

void map() {
    std::map<std::string, int> m;
    
    m["one"] = 1;
    m["two"] = 2;

    std::cout << "Map contains: ";

    for (const auto &pair : m) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
}

int main() {
    // vector();
    map();
    return 0;
}