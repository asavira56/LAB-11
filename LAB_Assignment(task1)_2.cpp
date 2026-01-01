#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers to swap: ";
    cin >> a >> b;
    int *p1 = &a;
    int *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; }
    cout << "The array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    cout << endl;
    delete[] arr;  
    return 0;
}
