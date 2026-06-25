#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double tempC;
	
	cout<<"===Cable Temperature Warning System ==="<<endl;
	cout<<"Enter the cable tempearture (deg C):";
	cin>>tempC;
	

	
	if(tempC > 70){
		cout<<"Temperature ="<<tempC<<" deg C"<<endl;
		cout<<"Cable overheating detected."<<endl;
	}
	else if (tempC < 70) {
		cout<<"Temperature ="<<tempC<<" deg C"<<endl;
        cout<<"Cable temperature is within safe range "<<endl;
	}
	
	return 0;
}
