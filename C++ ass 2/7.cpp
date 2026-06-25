#include <iostream>
#include<iomanip>
using namespace std;


int main() {
	const int N = 12;
	double wattage, totalPower = 0;
	
	cout<<"===Total Power of Lighting Points ==="<<endl;
	for(int i = 1;i<=N;i++){
		cout<<"Enter Wattage of lighting point"<< i <<"(W):";
		cin>>wattage;
		totalPower+=wattage;
	}
	
	  cout<<fixed<<setprecision(2);
	  cout<<"Total Lighting Load ="<<totalPower <<"W"<<endl;
	  
	  
	return 0;
}
