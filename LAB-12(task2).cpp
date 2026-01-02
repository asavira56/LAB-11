#include <iostream>
using namespace std;

class Shape {
public:
    void area() {          // Removed virtual
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = π * r * r" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = length * width" << endl;
    }
};

int main() {
    Shape* s1;
    Shape* s2;

    Circle c;
    Rectangle r;

    s1 = &c;
    s2 = &r;

    s1->area();   // Calls Shape's area() because no virtual
    s2->area();   // Calls Shape's area()

    return 0;
}
