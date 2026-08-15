#include <iostream>
#include <string>
using namespace std;

bool validUsername(const string& username) {
    return username.length() >= 3;
}

bool validPassword(const string& password) {
    return password.length() >= 6;
}

bool authenticate(const string& username, const string& password) {
    return validUsername(username) && validPassword(password);
}

int main() {
    string username;
    string password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (authenticate(username, password)) {
        cout << "Login successful." << endl;
    } else {
        cout << "Login failed. Check your credentials." << endl;
    }

    return 0;
}