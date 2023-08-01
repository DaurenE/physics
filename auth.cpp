#include <iostream>
#include <string>

using namespace std;

void authorization() {
    string email, user_name, password, symbol;

    size_t found_item = email.find_first_of(symbol);
    symbol = '@';
    cout << "Enter Email (example.email@gmail.com): ";
    cin >> email;
    if (found_item != string::npos) {
        cout << "access is allowed" << '\n';
    } else {
        cout << "Try again" << '\n';
    }
    cout << "\nEnter user name: ";
    cin >> user_name;
    
    size_t length = password.length();
    cout << "\nEnter password: ";
    cin >> password;

    if (length < 8) {
        cout << "password have to be more than 7" << '\n';
    }
}

int main () {
    authorization();
    return 0;
}