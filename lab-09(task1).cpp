#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");
    fout << "Ali 20 3.5\n";
    fout << "Sara 22 3.7\n";
    fout << "Sania 19 3.8\n";
    fout.close();

    ifstream fin("data.txt");
    string name;
    int age;
    float gpa;

    while (fin >> name >> age >> gpa) {
        cout << name << " " << age << " " << gpa << endl;
    }

    fin.close();
    return 0;
}
