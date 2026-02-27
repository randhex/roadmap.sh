#include <iostream> 

class Shape {
    public:
        virtual void draw() {
            std::cout << "Drawing a shape" << std::endl;
        }
};

class Circle : public Shape { 
    public :
        void draw() override {
            std::cout << "Drawing a circle" << std::endl;
        }  
};

class Rectangle : public Shape {
    public:
        void draw() override {
            std::cout << "Drawing a rectangle" << std::endl;
        }
};

int main () {
    Shape* shape;
    Circle circle;
    Rectangle rectangle;

    shape = &circle;
    shape->draw();

    shape = &rectangle;
    shape->draw();
    
    return 0;
}