#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int id;
		char name[100];
		char course[100];
		int age;
		
	public:
		
		
	   void setData()
	   {
	   	cout<<"enter id";                 cin>>this->id;
	   	cout<<"enter name";               cin>>this->name;
	   	cout<<"enter course";             cin>>this->course;
	   	cout<<"enter age"<<endl;          cin>>this->age;
       }
	   
	   void getData()
	   {
	   	  cout<<"id"<<this->id
	   	      <<"name"<<this->name
	   	      <<"course"<<this->course
	   	      <<"age"<<this->age<<endl;
	   }	
};
int main()
{
	student s[100];
	int n,i;
	
	cout<<"how many student:\n";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].setData();
	}
	for(i=0;i<n;i++)
	{
		s[i].getData();
	}
	return 0;
}


