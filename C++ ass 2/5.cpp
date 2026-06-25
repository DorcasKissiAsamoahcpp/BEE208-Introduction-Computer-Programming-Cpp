#include <iostream>
#include<iomanip>
using namespace std;


int main() {
	int choice;
	double value,result;
	
	cout<<"===Measurement Unit Conversion Menu ==="<< endl;
	cout<<"1. Convert volts to millivolts"<<endl;
	cout<<"2. Convert amperes to milliamperes"<<endl;
	cout<<"3. Convert kilowatts to watts"<<endl;
	cout<<"4. Convert ohms to kilo-ohms"<<endl;
	cout<<"Select a conversion(1-4):";
	cin>>choice;
	
	cout<<"Enter the value to convert:";
	cin>>value;
	
	cout<<fixed<<setprecision(3);
	
	switch(choice) {
		case 1:
			result = value*1000.0;
			cout<<value<<"V = "<<result<<"mV"<<endl;
			break;
		case 2:
			result = value*1000.0;
			cout<<value<<"kW="<<result<<"mA"<<endl;
			break;
		case 3:
			result = value*10000.0;
			cout<<value<<"kW ="<<result<<"W"<<endl;
			break;
		case 4:
			result=value*1000.0;
			cout<<value<<"ohm ="<<result<<"k-0hm"<<endl;
			break;
		default:
			cout<<"invalid conversion option selected."<<endl;
			
			
	}
	return 0;
}
