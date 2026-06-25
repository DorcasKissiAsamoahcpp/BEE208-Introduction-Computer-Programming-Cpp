#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	const int SETS = 6;
	double L1,L2,L3, average;
	
	cout<<"=== Average Current of Three-Phase Readings ==="<<endl;
	cout<<fixed<<setprecision(2);
	
	
	for(int set = 1;set<=SETS;set++) {
		cout<<"---Reading Set" <<set<<"---"<<endl;
		cout<<"Enter Line 1 current(A):";
		cin>>L1;
		cout<<"Enter Line 2 current(A):";
		cin>>L2;
		cout<<"EnterLine 3 current(A):";
		cin>>L3;
		
		average=(L1+L2+L3)/3.0;
		cout<<"Average current for set"<<set<<"="<<average<<"A"<<endl;
	}

	return 0;
}
