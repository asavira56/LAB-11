#include <iostream>
using namespace std;

struct Laptop {
    string brand;
    int ram;
    int price;
};

int main() {
    Laptop l;

    cout << "Enter brand ram price: ";
    cin >> l.brand >> l.ram >> l.price;

    cout << "Laptop: " << l.brand << " " << l.ram << "GB " << l.price;

    return 0;
}
