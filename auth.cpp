#include <iostream>
#include <string>

using namespace std;

void authorization() {
    while (true) {
        string email, password, user_name;

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
            char password_level;
            do {
                cout << "This password is too easy. Do you want to keep it? (y/n): ";
                cin >> password_level;
                if (password_level == 'y' || password_level == 'Y') {
                    cout << "Authorization successful!" << '\n';
                    return; // Завершаем функцию и программу после успешной авторизации
                } else if (password_level == 'n' || password_level == 'N') {
                    cout << "Enter password (minimum 8 characters): ";
                    cin >> password;
                    
                    break; // Переходим к повторному вводу пароля
                } else {
                    cout << "Invalid input. Assuming 'n' (No).\n";
                    cout << "Please try again.\n";
                }
            } while (true);
        } else {
            cout << "Authorization successful!" << '\n';
        }

        break;
    }
}

int main () {
    authorization();
    return 0;
}
