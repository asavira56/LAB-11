#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    double salary;
};

int main() {
    Employee emp;
    cout << "Enter employee name: ";
    getline(cin, emp.name);
    cout << "Enter employee ID: ";
    cin >> emp.id;
    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cout << "\nEmployee Information:\n";
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Salary: $" << emp.salary << endl;
    return 0;
}
