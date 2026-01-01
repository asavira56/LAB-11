#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for one integer
    int *p = new int;

    // Assign value
    *p = 42;
    // Display value
    cout << "Value stored in dynamically allocated memory: " << *p << endl;

    // Deallocate memory
    delete p;

    return 0;
}
