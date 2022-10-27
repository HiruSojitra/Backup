#include<iostream>
#include<string.h>
using namespace std;
class hotel
{
	private:
		int id;
		char name[100];
		int rating;
		char location[100];
		int establish_year;
		int staff_quantity;
		int room_quantity;
		
	public:
	    
		static char type[100];
			
		void setDAta()
		{
			cout<<"enter id:";  cin>>this ->id;
			cout<<"enter name:";  cin>>this ->name;
			cout<<"enter rating:";  cin>>this ->rating;
		    cout<<"enter location:";  cin>>this ->location;
		    cout<<"enter establish_year:";  cin>>this -> establish_year;
		    cout<<"enter staff_quantity:";  cin>>this ->staff_quantity;
		    cout<<"enter room_quantity:";  cin>>this ->room_quantity;
        }
        
        void getData()
        {
        	cout<<"Id:"<< this ->id
        	    <<"name:"<< this ->name
        	    <<"rating:"<< this ->rating
        	    <<"nlocation:"<< this -> location
        	    <<"establish_year:"<< this -> establish_year
        	    <<"staff_quantity:"<< this ->staff_quantity
        	    <<"room_quantity:"<< this -> room_quantity<<endl;
		}
};


   char hotel::
   type[100]="VIP";
   
 int main()
 {
 	 hotel h[100];
 	 int i,n;
 	 
 	 cout<<hotel::type<<endl;
 	 
 	 cout<<"how many hotel details:";
 	 cin>>n;
 	 
 	 for(i=0;i<n;i++)
 	 {
 	 	h[i].setDAta();
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	h[i].getData();
	 }
 	 return 0;
  }  	

