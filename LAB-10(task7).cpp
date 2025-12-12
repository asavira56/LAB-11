#include <iostream>
using namespace std;

class Rectangle {
    int l, w;
public:
    Rectangle(int a, int b) { l = a; w = b; }
    int area() { return l * w; }
    void display() { cout << "Length = " << l << ", Width = " << w << endl; }
};

int main() {
    Rectangle r1(4,5), r2(6,7);
    r1.display();
    cout << "Area = " << r1.area() << endl;
    r2.display();
    cout << "Area = " << r2.area() << endl;
    if(r1.area() > r2.area()) cout << "Rectangle 1 has bigger area." << endl;
    else if(r1.area() < r2.area()) cout << "Rectangle 2 has bigger area." << endl;
    else cout << "Both rectangles have equal area." << endl;
    return 0;
}
