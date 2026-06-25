#include <iostream>
#include<iomanip>
using namespace std;


int main() {
	int choice;
	
cout<<"===Transformer Ratio Calculator Menu ==="<<endl;
cout<<"1. Calculate turns ratio"<<endl;
cout<<"2. Calculate secondary voltage"<<endl;
cout<<"3. Calculate primary voltage"<<endl;
cout<<"Select a calculation(1-3):";
cin>>choice;

cout<<fixed<<setprecision(3);

switch(choice){
	case 1:{
		double primaryTurns,secondaryTurns, ratio;
	    cout<<"Enter primary turns(Np):";
	    cin>>primaryTurns;
	    cout<<"Enter secondary Turns(Ns):";
	    cin>> secondaryTurns;
	    ratio = primaryTurns/secondaryTurns;
	    cout<<"Turns Ratio(Np:Ns)="<<ratio<<":1"<<endl;
	   	break;
	   	
	}
	case 2:{
		double primaryVoltage, primaryTurns, secondaryTurns,secondaryVoltage;
		cout<<"Enter primary voltage (Vp) in V:";
		cin>>primaryVoltage ;
		cout<<"Enter primary turns(Np):";
		cin>>primaryTurns;
		cout<<"Enter secondary turns (Ns):";
		cin>>secondaryTurns;
		secondaryVoltage = primaryVoltage*secondaryTurns/primaryTurns;
		cout<<"secondary Voltage (Vs) ="<<secondaryVoltage<<"V"<<endl;
			break;
	}
    case 3:{
    	double secondaryVoltage, primaryTurns,secondaryTurns,primaryVoltage;
    	cout<<"Enter secondary voltage(Vs) in V:";
    	cin>>secondaryVoltage;
    	cout<<"Enter primary turns(Np):";
    	cin>>primaryTurns;
    	cout<<"Enter secondary turns(Ns):";
    	cin>>secondaryTurns;
    	primaryVoltage =secondaryVoltage*primaryTurns/secondaryTurns;
    	cout<<"Primary Voltage(Vp) = "<<primaryVoltage<<"V"<<endl;
		break;
	}
	default:
		cout<<"invalid selection. Please choose 1,2 or 3."<<endl;
	}
	return 0;
}
