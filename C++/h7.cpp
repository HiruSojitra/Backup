#include<iostream>
using namespace std;

class car
{
	int car_id;
	char company_name[100];
	char colour[100];
	char model[100];
	int release_year;
	
	 
	public:
		
		void getdata()
		{
			cout<<"enter your car_id: ";
			cin>>car_id;
			cout<<"enter your company_name: ";
			cin>>company_name;
			cout<<"enter your colour: ";
			cin>>colour;
			cout<<"enter your model: ";
			cin>>model;
			cout<<"enter your release_year:\n ";
			cin>>release_year;
		}
		void displaydata()
		{
			cout<<"\n your details are: ";
			cout<<"\n car_id "<<car_id;
			cout<<"\n company_name  "<<company_name;
			cout<<"\n colour "<<colour;
			cout<<"\n model "<<model;
			cout<<"\n release year\n "<<release_year;
		}
};

int main()
{
	car c1,c2,c3,c4;
	
      c1.getdata();
      c1.displaydata();
	  c2.getdata();
	  c2.displaydata();
      c3.getdata();
	  c3.displaydata();
	  c4.getdata();
	  c4.displaydata();
	
}
