#include <iostream>
#include <string>

using namespace std;

int main()
{
    int id;
    string name;
    string department;

    cout << "Enter Student ID: " << endl;
    cin >> id;

    while (id <= 0){
        cout << "Student ID must be positive. Enter again: ";
        cin >> id;
    }

    cin.ignore();

    cout << "Enter Student Name: " << endl;
    getline(cin, name);

    cout << "Enter Department: " << endl;
    getline(cin, department);

    cout << "Student Details " << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;

    return 0;
}