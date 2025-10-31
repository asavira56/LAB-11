#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    // Step 1: Palindrome Checker
    string rev = string(str.rbegin(), str.rend());
    if (str == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
