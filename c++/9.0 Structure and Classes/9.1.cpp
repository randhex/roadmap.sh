#include <iostream>
#include <string>

class Student {
    int roll_no;
    std::string name;
    float marks;

    public:
        void set_data( int r, std::string n, float m) {
            roll_no = r;
            name = n;
            marks = m;
        }

        void display() {
            std::cout << "Roll no: " << roll_no << std::endl
                      << "Name: " << name << std::endl
                      << "Marks: " << marks << std::endl; 
        }
};

int main() {
    Student s1;

    s1.set_data(1, "Bobby", 3.14);
    s1.display();
    
    return 0;
}