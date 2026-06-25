#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 12;
    const double FAULTY_VALUE = 999;
    double reading, total = 0;
    int validCount = 0;

    cout << "=== Skip Faulty Sensor Readings ===" << endl;
    cout << fixed << setprecision(2);

    for (int i = 1; i <= N; i++) {
        cout << "Enter sensor reading " << i << ": ";
        cin >> reading;

        if (reading == FAULTY_VALUE) {
            cout << "Faulty sensor reading skipped." << endl;
            continue;
        }

        total += reading;
        validCount++;
    }

    if (validCount > 0) {
        double average = total / validCount;
        cout << "Number of valid readings = " << validCount << endl;
        cout << "Average of valid readings = " << average << endl;
    }
    else {
        cout << "No valid readings were entered." << endl;
    }

    return 0;
}

