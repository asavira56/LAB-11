#include <iostream>
using namespace std;

int main() {
    string name[3];
    int roll[3];
    float gpa[3];

    for(int i=0; i<3; i++){
        cout << "Enter name, roll number, and GPA of student " << i+1 << ": ";
        cin >> name[i] >> roll[i] >> gpa[i];
    }

    cout << "\nStudent Details:\n";
    for(int i=0; i<3; i++){
        cout << name[i] << " " << roll[i] << " " << gpa[i] << endl;
    }

    return 0;
}
