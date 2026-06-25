#include <iostream>
#include <string>
using namespace std;

int main() {
    const string ACCESS_CODE = "BEE208";
    const int MAX_ATTEMPTS = 3;
    string enteredCode;
    int attempts = 0;
    bool accessGranted = false;

    cout << "=== Laboratory Login Attempt ===" << endl;

    while (attempts < MAX_ATTEMPTS) {
        cout << "Enter laboratory access code (Attempt " << (attempts + 1)
             << " of " << MAX_ATTEMPTS << "): ";
        cin >> enteredCode;
        attempts++;

        if (enteredCode == ACCESS_CODE) {
            accessGranted = true;
            break;
        }
        else {
            cout << "Incorrect code." << endl;
        }
    }

    if (accessGranted) {
        cout << "Access granted." << endl;
    }
    else {
        cout << "Access denied. Maximum attempts reached." << endl;
    }

    return 0;
}

