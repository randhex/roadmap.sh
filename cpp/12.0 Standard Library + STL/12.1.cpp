#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <forward_list>
#include <list>

void output_iterator() {
    std::vector<int> nums = { 1, 2, 3, 4 };
    std::istream_iterator<int> input(std::cin);
    std::copy(input, std::istream_iterator<int>(),  std::back_inserter(nums));
}

void forward_iterator() {
    std::forward_list<int> nums = { 1, 2, 3, 4};
    std::forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        std::cout << *itr << " ";
        ++itr;
    }
}

void reverse_iterator() {
    std::list<int> nums = { 1, 2, 3, 4 };
    std::list<int>::reverse_iterator itr = nums.rbegin();

    while (itr != nums.rend()) {
        std::cout << *itr << " ";
        ++itr;
    }
}

void bidirectional_iterator() {
    std::list<int> nums = { 1, 2, 3, 4};
    std::list<int>::iterator itr;

    for (itr = nums.begin(); itr != nums.end(); ++itr) {
        std::cout << *itr << " ";
    }

    for (--itr; itr != nums.begin(); --itr) {
        std::cout << *itr << " ";
    }
}

void random_access_iterator() {
    std::vector<int> nums = { 1, 2, 3, 4 };
    std::vector<int>::iterator itr; 
    
    for (itr = nums.begin(); itr != nums.end(); ++itr) {
        std::cout << *itr << " ";
    }

    for (itr -= 1; itr != nums.begin() - 1; --itr) {
        std::cout << *itr << " ";
    }
}


int main() {
    random_access_iterator();
    return 0;
}