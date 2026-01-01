#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string productName;
    int quantity;
    float price;
    cout << "Enter Product Name: ";
    cin.ignore(); // clear buffer
    getline(cin, productName);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    // Write to file
    ofstream outFile("product.txt");
    if(!outFile) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }
    outFile << productName << " " << quantity << " " << price;
    outFile.close();

    // Read from file
    ifstream inFile("product.txt");
    if(!inFile) {
        cout << "Error opening file for reading." << endl;
        return 1;}
    string nameFromFile;
    int qtyFromFile;
    float priceFromFile;
    inFile >> nameFromFile >> qtyFromFile >> priceFromFile;
    inFile.close();
    cout << "\nProduct Details from File:\n";
    cout << "Name: " << nameFromFile << endl;
    cout << "Quantity: " << qtyFromFile << endl;
    cout << "Price: " << priceFromFile << endl;
    return 0;
}
