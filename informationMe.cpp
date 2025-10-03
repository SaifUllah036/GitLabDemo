#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int age;
    double gpa;

    cout << "Enter name: ";
    getline(cin, name);   

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << fixed << setprecision(2);
    cout << "Student: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    return 0;
}

