#include <iostream>
#include <math.h>
using namespace std;

class Coach {
	
	public:
		
	float inches, cm, inch, feet;
	
	void setdata(){
	
	
	   cout << "Enter inches:";
	   cin >> inches;
	   float feet = inches / 12;
	   
	   cout<<"Enter your height in cm: ";
	   cin>>cm;
	
       inch=cm/2.54;
	   feet=inch/12;
	   cout << feet << " Feet"  << endl << endl;
   }
	
	void getData(){
		
	cout << "feet"<< endl << endl;
	cout<<"Your height in feet: "<<feet<<" feet" << endl;
	cout<<"Your height in inches: "<<inch<<" inches" << endl;

	
    }
};
int main(){
	
	Coach c;
	c.setdata();
	c.getData();
	
	return 0;
}
