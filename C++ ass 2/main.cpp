#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	double pf;
	
	cout<<"===Power Factor Status Checker ==="<<endl;
	cout<<"Enter the power Factor of the load:";
	cin>>pf;
	
	cout<<fixed<<setprecision(2);
	
	if(pf< 0 || pf>1){
		cout<<"Power Factor = "<<pf<<" ->invalid power factor"<<endl;
	}
	else if(pf<=0.50){
		cout<<"Power Factor = "<<pf<<"pf -> Poor power factor"<<endl;
 }
     else if(pf<=0.80){
     	cout<<"Power Factor = "<<pf<<"pf -> fair power factor"<<endl;
	 }
	 else if(pf<=0.95){
	 	cout<<"Power Factor = "<<pf<<"pf -> Good power factor"<<endl;
     }
     else if(pf<=1){
     	cout<<"Power Factor = "<<pf<<"pf -> Excellent power factor"<<endl;
	 }
	 
	 return 0;
	}
		
