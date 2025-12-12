#include <iostream>
using namespace std;

class Rectangle {
    int l, w;
public:
    Rectangle(int a, int b) { l = a; w = b; }
    int area() { return l * w; }
    int perimeter() { return 2 * (l + w); }
};

int main() {
    Rectangle r1(4,5), r2(6,7), r3(3,9);
    cout << "Rectangle 1: Area = " << r1.area() << ", Perimeter = " << r1.perimeter() << endl;
    cout << "Rectangle 2: Area = " << r2.area() << ", Perimeter = " << r2.perimeter() << endl;
    cout << "Rectangle 3: Area = " << r3.area() << ", Perimeter = " << r3.perimeter() << endl;
    return 0;
}
