#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double voltage, current, power;
    char choice;

    cout << "=== Repeated DC Power Calculator ===" << endl;
    cout << fixed << setprecision(2);

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        power = voltage * current;
        cout << "Power = " << power << " W" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> choice;

    
	  
	  } while (choice == 'Y' || choice == 'y');

    cout << "Calculator stopped." << endl;
    return 0;
}

