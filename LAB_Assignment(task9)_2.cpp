#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;

    cout << "Enter Length: ";
    cin >> r.length;

    cout << "Enter Width: ";
    cin >> r.width;

    cout << "\nRectangle Details:\n";
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
