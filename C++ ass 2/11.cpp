#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double temp;

    cout << "=== Stop Motor Test When Temperature Is Unsafe ===" << endl;
    cout << fixed << setprecision(1);

    cout << "Enter motor temperature reading (deg C): ";
    cin >> temp;

    while (temp <= 90) {
        cout << "Reading = " << temp << " deg C -> Temperature acceptable." << endl;
        cout << "Enter next motor temperature reading (deg C): ";
        cin >> temp;
    }

    cout << "Reading = " << temp << " deg C" << endl;
    cout << "Motor temperature unsafe. Stop motor test." << endl;

    return 0;
}
