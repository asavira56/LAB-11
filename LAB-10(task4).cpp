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
    int length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    Rectangle r(length, width);
    cout << "Area = " << r.area() << ", Perimeter = " << r.perimeter() << endl;
    return 0;
}
