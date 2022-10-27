#include <iostream>
#include <string.h>
using namespace std;

class School{
	private:
 
		char name[100];
		int rollNo;
		int std;
		int age;
		int contact_no;
		char institute_name[100];
		char add[100];
	public :
		   static int id;
	public:
		void setScl()
		{
		    cout<<"scl information";
			cout<<"enter student id :";
			cin>>this->id;
			cout<<"enter student name :";
			cin>>this->name;
			cout<<"enter student roll no :";
			cin>>this->rollNo;
			cout<<"enter student standard :";
			cin>>this->std;
			cout<<"enter student age :";
			cin>>this->age;
			cout<<"enter student contact no :";
			cin>>this->contact_no;
			cout<<"enter student address :"<<endl;
			cin>>this->add;
		}
		void getScl()
		{
			cout<<endl  <<"  ,Id            :" <<this->id
			            <<"  ,Name    	    : "<<this->name
						<<"  ,Roll No.      : "<<this->rollNo
						<<"  ,Standard      : "<<this->std
						<<"  ,Age           : "<<this->age
						<<"  ,Contact no    : "<<this->contact_no
						<<"  ,Institute name: "<<this->institute_name
						<<"  ,Address       :" <<this->add<<endl;
		}
};

class Clg{
	private:
		
		char name[100];
		int rollNo;
		char course[100];
		int age;
		int contact_no;
		char institute_name[100];
		char add[100];
		
	public :
		 		static int id;
	public:
		 
		void setClg()
		{
			cout<<"clg information";
			cout<<"enter student id :";
			cin>>this->id;
			cout<<"enter student name :";
			cin>>this->name;
			cout<<"enter student roll no :";
			cin>>this->rollNo;
			cout<<"enter student course :";
			cin>>this->course;
			cout<<"enter student age :";
			cin>>this->age;
			cout<<"enter student contact no :";
			cin>>this->contact_no;
			cout<<"enter student institute name :";
			cin>>this->institute_name;
			cout<<"enter student address :";
			cin>>this->add;
			
	
		}

		void getClg()
		{
			cout<<endl  <<"   Id            :" <<this->id
			            <<"  ,Name    	    : "<<this->name
						<<"  ,Roll No.      : "<<this->rollNo
						<<"  ,Course        : "<<this->course
						<<"  ,Age           : "<<this->age
						<<"  ,Contact no    : "<<this->contact_no
						<<"  ,Institute name: "<<this->institute_name
						<<"  ,Address       :" <<this->add<<endl;
			
		}
};
int School :: id = 4546;
int Clg :: id = 6778;

int main()
{
	Clg c[100];
	int i,n;
	cout<<"School Id is  : "<<School :: id<<endl;
	cout<<"college Id is : "<<Clg :: id<<endl;
	cout<<"How many school and clg details u want to enter => ";
	cin>>n;

	for(i=0;i<n;i++)
	{
			cout<<endl<<" school and clg information : "<<i+1<<endl;
		c[i].setClg();
	}
	cout<<endl<<" school and clg information is "<<endl;	
	for(i=0;i<n;i++)
	{
		c[i].getClg();
	}	
	return 0;
}

