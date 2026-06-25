#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double resistance;

    cout << "=== Earth Resistance Test ===" << endl;
    cout << fixed << setprecision(2);

    cout << "Enter earth resistance reading (Ohms): ";
    cin >> resistance;

    while (resistance <= 5) {
        cout << "Reading = " << resistance << " Ohms -> Earthing acceptable." << endl;
        cout << "Enter next earth resistance reading (Ohms): ";
        cin >> resistance;
    }

    cout << "Reading = " << resistance << " Ohms" << endl;
    cout << "Earth resistance too high. Improve earthing system." << endl;

    return 0;
}

