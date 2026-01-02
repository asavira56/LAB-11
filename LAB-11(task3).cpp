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

class Teacher : public Person {
public:
    string subject;
    float salary;

    Teacher(string n, int a, string s, float sal) : Person(n, a) {
        subject = s;
        salary = sal;
    }

    void display() {
        cout << name << endl;
        cout << age << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

int main() {
    Teacher t("FARYAL", 23, "construction and development", 50000);
    t.display();
    return 0;
}
