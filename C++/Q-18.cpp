#include <iostream>
using namespace std;
 
class Factorial{
	
    	public:
    		
				int n;
				int factorial = 1;
	          
	          	setDAta(){
				  cout << "Enter a positive integer: ";
				  cin >> n;
	            }
             
              	getDAta(){
   				    

				    if (n < 0)
				        cout << "Error! Factorial of a negative number doesn't exist.";
				    else {
				        for(int i = 1; i <= n; ++i) {
				            factorial *= i;
				        }
				        cout << "Factorial of " << n << " = " << factorial;    
				    }

               }
};
 
int main(){
	
	Factorial fac;
	
	fac.setDAta();
	fac.getDAta();
	
	return 0;
}

