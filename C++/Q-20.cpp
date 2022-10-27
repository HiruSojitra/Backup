#include <iostream>
using namespace std;
 
class Reverse{
	
    	public:
				     
				 int n1, n2, n3;
				 int reversed_number = 0;
				 int remainder;
    		
	          	setDAta(){
	          		
					  cout << "Enter First Number : ";
					  cin >> n1;
					  
					  cout << "Enter Second Number : ";
					  cin >> n2;
					  
					  cout << "Enter Third Number : ";
					  cin >> n3;
	            }
             
              	getData(int n){
              		
					reversed_number =0;
              		
					while(n != 0) {
					    remainder = n % 10;
					    reversed_number = reversed_number * 10 + remainder;
					    n /= 10;
					}
					
					cout << "Reversed Number = " << reversed_number <<endl;					    
               }
};
 
int main(){
	
	Reverse rvr;
	
	rvr.setDAta();
	
	rvr.getData(rvr.n1);
	rvr.getData(rvr.n2);
	rvr.getData(rvr.n3);
	
	return 0;
}

