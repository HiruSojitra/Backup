#include<iostream>
using namespace std;

class A
{
	public :
		int employee_id;
		char employee_name[100];
		int employee_roll_number;
		
		void setData()
		{
			cout<<"enter employee id : ";
			cin>>this->employee_id;
			cout<<"enter employee name : ";
			cin>>this->employee_name;
			cout<<"enter employee_roll_number : ";
			cin>>this->employee_roll_number;
		}
		void getData()
		{
			cout<<endl<<"employee id : "<<this->employee_id;
			cout<<endl<<"employee name : "<<this->employee_name;
			cout<<endl<<"employee role_number : "<<this->employee_roll_number;
		}
};

class B
{
	public :
		float monthly_salary;
		int exp;
		
		
		void setSalary()
		{
			cout<<"enter monthly salary : ";
			cin>>this->monthly_salary;
			
			cout<<"enter experience : ";
			cin>>this->exp;
		}
		void getSalary()
		{
			cout<<endl<<"monthly salary : "<<this->monthly_salary;
			cout<<endl<<"employee experience : "<<this->exp;
		}
		
};

class C : public B
{
		public :
			char companyname[100];
			char address[100];
			
			void setCompnay()
			{
				cout<<"enter company name : ";
				cin>>this->companyname;
				cout<<"enter address : ";
				cin>>this->address;
			}
			void getCompnay()
			{
				cout<<endl<<"company name : "<<this->companyname;
				cout<<endl<<"address : "<<this->address;
			}
			
};

class D : public A
{
	public :
		char email[100];
		int contactno;
		
		void setemail()
		{
				cout<<"enter email : ";
				cin>>this->email;
				cout<<"enter contact no : ";
				cin>>this->contactno;
		}
		void getemail()
		{
				cout<<endl<<"email : "<<this->email;
				cout<<endl<<"contact no : "<<this->contactno;
		}
};

int main()
{
	D d;
	
	d.getCompnay();
//	d.set
//	c.setSalary();
//	c.setCompnay();
//	c.setemail();
//	c.getData();
//	c.getSalary();
//	c.getCompnay();
//	c.getemail();

}
