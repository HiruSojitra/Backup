#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	private :
		int id;
		char name[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		char rating_type[100];
		char website[100];
		
	public:
		void setData()
		{
			cout<<"enter hotel id :";
			cin>>id;
			cout<<endl<<"enter hotel name :";
			cin>>name;
			cout<<endl<<"enter hotel staff_size :";
			cin>>staff_size;
			cout<<endl<<"enter hotel room_size :";
			cin>>room_size;
			cout<<endl<<"enter hotel establish_year :";
			cin>>establish_year;
			cout<<endl<<"enter hotel address :";
			cin>>address;
			cout<<endl<<"enter hotel rating_type :";
			cin>>rating_type;
			cout<<endl<<"enter hotel website:";
			cin>>website;
		}
		void getData()
		{
			cout<<"id:"<<this->id
			<<",name :"<<this->name
			<<",staff_size :"<<this->staff_size
			<<",room_size:"<<this->room_size
			<<",establish_year :"<<this->establish_year
			<<",address :"<<this->address
			<<",rating_type :"<<this->rating_type
			<<",website :"<<this->website<<endl;
		}
};

int main()
{
	Hotel h[100];
	int i,n;
	
	cout<<"how many hotel details enter :";
	cin>>n;
	cout<<" Enter the hotel information :"<<endl;
	cout<<i+1<<endl;
	
	for(i=0;i<n;i++)
	{
		h[i].setData();
	}
	cout<<endl<<"The hotel information is ";
    for(int i=0; i<n;i++)
    {
         h[i].getData();
    }
	return 0;
}



