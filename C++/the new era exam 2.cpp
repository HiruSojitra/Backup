#include <iostream>
using namespace std;

class time 
{   
    public :
    	
	int hh1,mm1,ss1;	
	int hh2,mm2,ss2;
	int HH,MM,SS;
};

int main()
{

	cout<<"Enter first time:"<<endl;
	cout<<"Hours?: "; cin>> hh 1;
	cout<<"Minutes?: "; cin>>mm 1;
	cout<<"seconds?: "; cin>>ss1;
	
	cout<<"Enter second time:"<<endl;
	cout<<"Hours?: "; cin>>hh2;
	cout<<"Minutes?: "; cin>>mm2;
	cout<<"seconds?: "; cin>>ss2;	
	
	
	SS=ss1+ss2;
	MM=mm1+mm2+(SS/60);
	HH=hh1+hh2+(MM/60);
	MM=MM%60;	
	SS=SS%60;	
	

	cout<<"Added time is: ";
	cout<<HH<<" hour(s) "<<MM<<" minute(s) "<<SS<<" second(s)"<<endl;
	
	return 0;
}


