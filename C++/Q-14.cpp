#include <iostream>
using namespace std;
 
class LeapYear {
	
    	public:
    		
              int year;
              
              setDAta(){
				   cout<<"Enter year:  ";
				   cin>>year;
				   
             }
             
              getData(){
				   if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
				   cout<<year<<" is a leap year";
				   else
				   cout<<year<<" is not a leap year";
			  
               }
};
 
int main(){
	
	LeapYear ly;
	
	ly.setDAta();
	ly.getData();
	
	return 0;
}

