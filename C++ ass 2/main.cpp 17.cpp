#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_READINGS = 10;
    double reading;

    cout << "=== Stop Insulation Test Using Break ===" << endl;
    cout << fixed << setprecision(2);

    for (int i = 1; i <= MAX_READINGS; i++) {
        cout << "Enter insulation resistance reading " << i << " (Mega-Ohms): ";
        cin >> reading;

        if (reading < 1) {
            cout << "Insulation failure detected. Test stopped." << endl;
            break;
        }
        else {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}

