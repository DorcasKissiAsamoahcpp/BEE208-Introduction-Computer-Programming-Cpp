#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 10;
    double reading, totalValid = 0;

    cout << "=== Skip Negative Power Readings ===" << endl;
    cout << fixed << setprecision(2);

    for (int i = 1; i <= N; i++) {
        cout << "Enter power reading " << i << " (W): ";
        cin >> reading;

        if (reading < 0) {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        totalValid += reading;
    }

    cout << "Total of valid power readings = " << totalValid << " W" << endl;

    return 0;
}

