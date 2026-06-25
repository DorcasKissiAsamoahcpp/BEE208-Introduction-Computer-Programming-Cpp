#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_APPLIANCES = 20;
    double rating, totalLoad = 0;

    cout << "=== Stop Load Test When Limit Is Reached ===" << endl;
    cout << fixed << setprecision(2);

    for (int i = 1; i <= MAX_APPLIANCES; i++) {
        cout << "Enter power rating of appliance " << i << " (W): ";
        cin >> rating;

        totalLoad += rating;

        if (totalLoad > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "Final total load = " << totalLoad << " W" << endl;

    return 0;
}

