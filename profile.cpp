#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string email;
    string studentId;

    cout << "Enter your student ID: ";
    getline(cin, studentId);

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your email: ";
    getline(cin, email);

    cout << "\nProfile Information\n";
    cout << "Student ID: " << studentId << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;

    return 0;
}