#include <iostream>
#include <string>

using namespace std;

void authorization() {
    while (true) {
        string email, password, user_name;
        char password_level;

        cout << "Enter Email (example.email@gmail.com): ";
        cin >> email;

        size_t found_item = email.find('@');

        if (found_item != string::npos) {
            cout << "Access is allowed" << '\n';
        } else {
            cout << "Try again" << '\n';
            continue;
        }
    
        cout << "Enter user name: ";
        cin >> user_name;

        do {
            cout << "Enter password (minimum 8 characters): ";
            cin >> password;
            
            if (password.length() < 8) {
                cout << "Password must be at least 8 characters long.\nPlease try again.\n";
            }
        } while (password.length() < 8);

        if (password == "12345678") {
            cout << "This password is too easy. Do you want to keep it? (y/n): ";
            cin >> password_level;
            if (password_level == 'y' || password_level == 'Y') {
                break;
            } else if (password_level == 'n' || password_level == 'N') {
                break;
            } else {
                cout << "Invalid input. Assuming 'n' (No).\n";
                continue;
            }
        }

        cout << "Authorization successful!" << '\n';
        break;
    }
}

int main () {
    authorization();
    return 0;
}
