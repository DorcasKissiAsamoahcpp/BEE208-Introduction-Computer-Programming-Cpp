#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    cout << "=== Repeated Ohm's Law Calculator ===" << endl;
    cout << fixed << setprecision(2);

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        resistance = voltage / current;
        cout << "Resistance = " << resistance << " Ohms" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Calculator stopped." << endl;

    return 0;
}

