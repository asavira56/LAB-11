#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) { side = s; }
    int area() { return side * side; }
    void display() { cout << "Side = " << side << endl; }
};

int main() {
    Square s1(5);
    s1.display();
    cout << "Area = " << s1.area() << endl;
    return 0;
}
