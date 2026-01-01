#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book b;

    cout << "Enter Book Title: ";
    getline(cin, b.title);  // read full line including spaces

    cout << "Enter Author: ";
    getline(cin, b.author); // read full line

    cout << "Enter Price: ";
    cin >> b.price;         // float input

    cout << "\nBook Details:\n";
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;

    return 0;
}
