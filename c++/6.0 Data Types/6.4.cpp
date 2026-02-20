#include <iostream>

union Data {
    int num;
    char letter;
    float decimal;
};

int main() {
    Data myData;
    myData.num = 42;
    myData.letter = 'A';
    myData.decimal = 42.42f;

    return 0;
}