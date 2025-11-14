#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s;

    cout << "Enter name roll gpa: ";
    cin >> s.name >> s.roll >> s.gpa;

    cout << "Student Info: " << s.name << " " << s.roll << " " << s.gpa;

    return 0;
}
