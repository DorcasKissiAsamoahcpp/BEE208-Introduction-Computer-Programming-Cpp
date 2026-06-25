#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 8;
    double power, time, energy, totalEnergy = 0;

    cout << "=== Calculate Total Energy for Appliances ===" << endl;
    cout << fixed << setprecision(2);

    for (int i = 1; i <= N; i++) {
        cout << "--- Appliance " << i << " ---" << endl;
        cout << "Enter power rating (W): ";
        cin >> power;
        cout << "Enter usage time (hours): ";
        cin >> time;

        energy = power * time;
        cout << "Energy consumed by appliance " << i << " = " << energy << " Wh" << endl;
        totalEnergy += energy;
    }

    cout << "Total energy consumed by all appliances = " << totalEnergy << " Wh" << endl;

    return 0;
}

