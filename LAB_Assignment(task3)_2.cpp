#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("students.txt");

    out << "Ali 85 A\n";
    out << "Sara 90 A+\n";
    out << "Ahmed 70 B\n";

    out.close();

    ifstream in("students.txt");
    string name, grade;
    int marks;

    cout << "Student Records:\n";

    while(in >> name >> marks >> grade)
        cout << name << " " << marks << " " << grade << endl;

    in.close();
    return 0;
}
