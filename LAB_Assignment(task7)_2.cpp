#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;

    void checkResult() {
        if (marks >= 50)
            cout << "Status: Pass" << endl;
        else
            cout << "Status: Fail" << endl;
    }
};

int main() {
    Student s;

    cout << "Enter Student Name: ";
    cin.ignore();  // clear buffer if needed
    getline(cin, s.name);

    cout << "Enter Roll Number: ";
    cin >> s.roll;

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    s.checkResult();

    return 0;
}
