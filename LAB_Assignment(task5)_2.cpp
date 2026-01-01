#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // pointer points to first element

    cout << "Accessing array using pointer arithmetic:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << *(p + i) << endl;
    }

    return 0;
}
