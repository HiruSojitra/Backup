#include<iostream>
#include<string.h>
using namespace std;
class employees_id{
	public:
		int id;
		employees_id(){
			cout<<"Enter id : ";
			cin>>id;
		}
		virtual void getAllDetails()=0;
	
};
class employees_name:public employees_id{
	public:
		char name[100];
		employees_name(){
			cout<<"Enter name : ";
			cin>>name;
		}
		virtual void getAllDetails()=0;

};
class employees_salary:public employees_name{
	public:
		int salary;
		employees_salary(){
			cout<<"Enter salary : ";
			cin>>salary;
		}
		void getAllDetails(){
			cout<<"employees id : "<<id<<endl;
			cout<<"employees name : "<<name<<endl;
			cout<<"employees salary : "<<salary<<endl;
		}
};
int main(){
//	employees_id i;
//	employees_name n;
	employees_salary s;
	s.getAllDetails();
	return 0;
}
