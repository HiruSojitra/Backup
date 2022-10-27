#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[100];
	int roll;
	int age;
	float salary;
	int experience;
	char city[100];
	char company_name[100];
	
	public:
		
		void getdata()
		{
			cout<<"enter your id:\n";
			cin>>id;
			cout<<"enter your name:\n";
			cin>>name;
			cout<<"enter your roll:\n";
			cin>>roll;
			cout<<"enter your age:\n";
			cin>>age;
			cout<<"enter your salary:\n";
			cin>>salary;
			cout<<"enter your experience:\n";
			cin>>experience;
			cout<<"enter your city:\n";
			cin>>city;
			cout<<"enter your company_name\n:";
			cin>>company_name;
		}
		void displaydata()
		{
			cout<<"\n your details are:\n";
			cout<<"\n id\n"<<id;
			cout<<"\n name\n"<<name;
			cout<<"\n roll\n"<<roll;
			cout<<"\n age\n"<<age;
			cout<<"\n salary\n"<<salary;
			cout<<"\n experience\n"<<experience;
			cout<<"\n city\n"<<city;
			cout<<"\n company_name\n  "<<company_name;
		}
};

int main()
{
	employee emp1,emp2,emp3,emp4,emp5;
	
	emp1.getdata();
	emp1.displaydata();
	emp2.getdata();
	emp2.displaydata();
	emp3.getdata();
	emp3.displaydata();
	emp4.getdata();
	emp4.displaydata();
	emp5.getdata();
	emp5.displaydata();
	
}
