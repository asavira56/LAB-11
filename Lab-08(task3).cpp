#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r;

    cout << "Enter length and width: ";
    cin >> r.length >> r.width;

    float area = r.length * r.width;
    float peri = 2 * (r.length + r.width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << peri;

    return 0;
}
