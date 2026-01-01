#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.1416f * radius * radius;
    }
};

int main() {
    Circle c(5);     // radius fixed (you can change value)
    cout << "Area = " << c.area();
}
