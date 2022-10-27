#include <iostream>
#include <string.h>
using namespace std;

class student{
	private:
		char name[100];
		int rollNo;
		int age;
		int contact_no;
	public:
		void setStudent()
		{
			cout<<endl<<"enter student name :";
			cin>>this->name;
			cout<<endl<<"enter student roll no :";
			cin>>this->rollNo;
			cout<<endl<<"enter student age :";
			cin>>this->age;
			cout<<endl<<"enter student contact no :";
			cin>>this->contact_no;
		}
		void getStudent()
		{
			cout<<endl  <<"  Name    	   : "<<this->name
						<<"  Roll No.      : "<<this->rollNo
						<<"  Age           : "<<this->age
						<<"  Contact no    : "<<this->contact_no<<endl;
		}
};

class classDetails{
	private:
		char cname[100];
		student s;
	public:
		 
		void setClass()
		{
			cout<<endl<<"enter class Name :";
			cin>>this->cname;
			s.setStudent();			
		}
		void getClass()
		{
			cout<<"class name :  "<<this->cname;
			s.getStudent();
		}
};

int main()
{
	classDetails c[100];
	int i,n;
	cout<<"How many student and class details u want to enter => ";
	cin>>n;
	cout<<endl<<" student and class information : "<<i+1<<endl;
	for(i=0;i<n;i++)
	{
		c[i].setClass();
	}
	cout<<endl<<" ** student and class information is **"<<endl;	
	for(i=0;i<n;i++)
	{
		c[i].getClass();
	}	
	return 0;
}

