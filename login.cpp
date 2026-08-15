#include <iostream>
#include <string>
using namespace std;

bool validUsername(const string& username) {
    return username.length() >= 3;
}

bool validPassword(const string& password) {
    return password.length() >= 6;
}

int main() {
    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (!validUsername(username)) {
        cout << "Invalid username." << endl;
    } else if (!validPassword(password)) {
        cout << "Password must contain at least 6 characters." << endl;
    } else {
        cout << "Login credentials are valid." << endl;
    }

    return 0;
}