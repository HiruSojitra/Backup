#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
	public:
		char name[100];
		int age;
		
		void setData(){
			cout<<"Enter name:";      cin>>name;
			cout<<"Enter age:";       cin>>age;
		}
};
class zebra:public Animal{
	
	private:
		char place_of_origin[100];
	public:
	    void print_message(){
	    	setData();
	    	strcpy(place_of_origin,"Australia");
	    	cout<<"   -: Zebra :-   "<<endl;
	    	cout<<"Name"<<name<<endl;
	    	cout<<"age"<<age<<endl;
	    	cout<<" place_of_origin "<<place_of_origin<<endl;
		}	
};
class Dolphin:public Animal{
	
	private:
		 char place_of_origin[100];
    public:
         void print_message(){
         	setData();
         	strcpy(place_of_origin,"africa");
	    	cout<<"   -: Dolphine:-   "<<endl;
	    	cout<<"Name"<<name<<endl;
	    	cout<<"age"<<age<<endl;
	    	cout<<" place_of_origin "<<place_of_origin<<endl;
        }	
};
int main(){
	
	zebra z;
	Dolphin d;
	
	z.print_message();
	d.print_message();
	
	return 0;
	
}
