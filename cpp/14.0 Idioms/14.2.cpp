#include <iostream>
#include <memory>

class MyString {
public:
    MyString(const std::string &str) : data(std::make_shared<std::string>(str)) {}

    // Use the same shared data for copying.
    MyString(const MyString &other) : data(other.data) { 
        std::cout << "Copied using the Copy-Write idiom.\n";
    }

    // Make a copy only if we want to modify the data.
    void write(const std::string &str) {
        // Check if there's more than one reference.
        if (data.use_count() > 1) {
            data = std::make_shared<std::string>(*data);
            std::cout << "Copy is actually made for writing.\n";
        }
        *data = str;
    }

private:
    std::shared_ptr<std::string> data;
};

int main() {
    MyString str1("Hello");
    MyString str2 = str1; // No copy operation, just shared references.

    str1.write("Hello, World!"); // This is where the actual duplication happens.
    return 0;
}