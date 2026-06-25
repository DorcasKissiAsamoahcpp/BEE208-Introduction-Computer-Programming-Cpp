#include <iostream>
using namespace std;

int main(){
	int choice;
	cout<<"===Fuse Selection Menu ==="<<endl;
	cout<<"5 A Fuse"<<endl;
	cout<<"10 A Fuse"<<endl;
	cout<<"13 A Fuse"<<endl;
	cout<<"20 A Fuse"<<endl;
	cout<<"32 A Fuse"<<endl;
	cout<<"Select a Fuse rating(1-5):";
	cin>>choice;
	
	switch (choice){
		case 1:
	    	cout<<" 5 A Fuse ->Suitable for: table lamps and radios)."; break;
		break;
		case 2:
		cout<<"10 A Fuse->Suitable for:small power circuits e.g. immersion"<<"heaters and portable hand tools."<<endl;
		break;
		case 3:
		cout<<"13 A Fuse -> Suitable for: Standard household plug-top fuse"<<"general appliance(kettles,toasters,irons)."<<endl;
		break;
		case 4:
		cout<<"20 A Fuse-> Suitable for: Water heaters and ring main socket"<<"outlet circuits."<<endl;
		break;
		case 5:
		cout<<"32 A Fuse-> Suitable for: Ring main circiuts,cookers and elctric showers."<<endl;
		break;
		cout<<"invalid selection. Please choose a fuse rating between 1 and 5"<<endl;
	}
	    return 0;
}
