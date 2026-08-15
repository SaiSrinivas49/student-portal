#include <iostream>
#include <string>

using namespace std;

int main()
{
    int id;
    string name;
    int semester;
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

    cout << "Enter Semester: ";
    cin >> semester;

    while (semester < 1 || semester > 8){
        cout << "Semester must be between 1 and 8. Enter again: " << endl;
        cin >> semester;
    }

    cout << "Student Details " << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Semester: " << semester << endl;
    cout << "Department: " << department << endl;

    return 0;
}