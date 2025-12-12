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
    Rectangle r(4, 5);
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;
    return 0;
}
