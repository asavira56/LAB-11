#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};
class Student : public Person {
public:
    int roll;
    float gpa;

    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }

    void display(string title) {
        cout << title << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << endl;
    }};
int main() {
    Student s1("Ali", 20, 1, 3.4);
    Student s2("Sara", 21, 2, 3.8);
    s1.display("First Student");
    s2.display("Second Student");
    return 0;}
