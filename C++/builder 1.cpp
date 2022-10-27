#include<iostream>
#include<string.h>
using namespace std;

class Emp
{
	public :
		int id;
		char name[100];
		char role[100];
		int salary;
		int exp;
		char address[100];
		char email[1000];
		int contact;
	

		void setData()
		{
			cout<<endl<<"enter emp id :";
			cin>>id;
			cout<<endl<<"enter emp name :";
			cin>>name;
			cout<<endl<<"enter emp role :";
			cin>>role;
			cout<<endl<<"enter emp salary :";
			cin>>salary;
			cout<<endl<<"enter emp experience :";
			cin>>exp;
			cout<<endl<<"enter emp address :";
			cin>>address;
			cout<<endl<<"enter emp email id :";
			cin>>email;
			cout<<endl<<"enter emp contact no :";
			cin>>contact;
			
		}
		void getData()
		{
			cout<<"  Emp Details";
			cout<<"emp id 	      :"<<id;
			cout<<"emp name       :"<<name;
			cout<<"emp role       :"<<role;
			cout<<"emp salary     :"<<salary;
			cout<<"emp experience :"<<exp;
			cout<<"emo address 	  :"<<address;
			cout<<"emp email id	  :"<<email;
			cout<<"emp contact no :"<<contact;
		}
};

int main()
{
	Emp e[100];
	int i,n;
	cout<<"how many emp enter :";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		
		e[i].setData();
	}
	
    for(int i=0; i<n;i++)
    {
         e[i].getData();
    }
	return 0;
}
