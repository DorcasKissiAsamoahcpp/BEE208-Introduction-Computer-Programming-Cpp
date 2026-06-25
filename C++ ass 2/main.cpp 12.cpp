#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double voltage;

    cout << "=== Solar Panel Voltage Tracker ===" << endl;
    cout << fixed << setprecision(2);

    cout << "Enter solar panel voltage reading (V): ";
    cin >> voltage;

    while (voltage >= 18) {
        cout << "Reading = " << voltage << " V -> Panel operating normally." << endl;
        cout << "Enter next solar panel voltage reading (V): ";
        cin >> voltage;
    }

    cout << "Reading = " << voltage << " V" << endl;
    cout << "Solar panel voltage below operating level." << endl;

    return 0;
}

