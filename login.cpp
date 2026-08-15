#include <iostream>
#include <string>
using namespace std;

bool validUsername(string& username) {
    return username.length() >= 3;
}

int main() {
    string username;

    cout << "Enter username: ";
    cin >> username;

    if (validUsername(username)) {
        cout << "Welcome, " << username << "!" << endl;
    } else {
        cout << "Username must contain at least 3 characters." << endl;
    }

    return 0;
}