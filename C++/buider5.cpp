#include <iostream>
#include <string.h>
using namespace std;

class State{
	private:
 
		char state_name[100];
		int area;
		char zone[100];
		char largest_city[100];
		
	public :
		   static char official_language[100];;
	public:
		static void language()
		{
			strcpy(official_language,"Hindi");
		}
		void setState()
		{
		    cout<<endl<<"India State infotmation";
			cout<<"enter state_name  :";
			cin>>this->state_name;
			cout<<"enter area :";
			cin>>this->area;
			cout<<"enter zone :";
			cin>>this->zone;
			cout<<"enter largest_city :"<<endl;
			cin>>this->largest_city;
		}
		void getState()
		{
			cout<<endl  <<"   state_name :" <<this->state_name
			            <<"  , area : "<<this->area
						<<"  , zone : "<<this->zone
						<<"  , largest_city : "<<this->largest_city
						<<"  , official_language : "<<this->official_language<<endl;
		}
		
};

char State :: official_language[100] = "Hindi";

int main()
{
	State s[100];
	int i,n;
	State :: language() ;

	cout<<"How many State details u want to enter ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<endl<<" State information : "<<i+1<<endl;
		s[i].setState();
	}
	cout<<endl<<"State information is "<<endl;	
	for(i=0;i<n;i++)
	{
		s[i].getState();
	}	
	return 0;
}

