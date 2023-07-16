#include <iostream>
#include "physics_for_7.h"
#include "physics_for_8.h"

using namespace std;

int main () {
    //There will be my files as functions
    string common;
    cout << "Enter your class (7-11): ";
    cin >> common;
    if (common > "8") {
        cout << "Sorry but now we can't do it try another\n";
    }
    cout << "And you typed number ";
    switch (stoi(common)) {
        case 7:
            cout << '7';
            
            break;

        default:
            break;
    }
    return 0;
}