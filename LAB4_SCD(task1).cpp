#include <iostream>
using namespace std;
int factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}
int factorialIterative(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial (Recursive): " << factorialRecursive(num) << endl;
    cout << "Factorial (Iterative): " << factorialIterative(num) << endl;
    
    return 0;
}
