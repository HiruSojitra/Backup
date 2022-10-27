#include <iostream>
using namespace std;
 
class EvenorOdd{
	
    	public:
    		
			  int n;
              
              setDAta(){
					cout << "Enter an integer: ";
					cin >> n;	   
             }
             
              getData(){
   				    
				  if ( n % 2 == 0)
				    cout << n << " is even.";
				  else
				    cout << n << " is odd.";

               }
};
 
int main(){
	
	EvenorOdd eo;
	
	eo.setDAta();
	eo.getData();
	
	return 0;
}

