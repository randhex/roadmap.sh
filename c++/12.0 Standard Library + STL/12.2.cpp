#include <vector>
#include <iostream>
#include <algorithm>

void sort() {
    std::vector<int> nums = { 10, 9, 8, 5, 6, 7, };
    std::sort(nums.begin(), nums.end());

    for (int num : nums) {
        std::cout << num << ' ';
    }
}

void search() {
    std::vector<int> nums = { 5, 6, 7, 8, 9, 10 };
    auto it = std::find(nums.begin(), nums.end(), 9);

    if (it != nums.end()) {
        std::cout << "Found 9 at position: " << (it - nums.begin());
    } else {
        std::cout << "9 not found";
    }
}

void remove() {
    std::vector<int> nums = {5, 6, 7, 6, 8, 6, 9, 6, 10};
    nums.erase(std::remove(nums.begin(), nums.end(), 6), nums.end());

    for (int num : nums) {
        std::cout << num << ' ';
    }
}


int main() {
    // sort();
    // search();
    remove();
    return 0;
}