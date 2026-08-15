#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string email;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your email: ";
    getline(cin, email);

    cout << "Profile Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;

    return 0;
}