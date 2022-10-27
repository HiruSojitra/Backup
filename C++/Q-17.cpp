#include <iostream>
using namespace std;
 
class PrimeNumber{
	
    	public:
    		
			  int i, n;
			  bool is_prime = true;
              
              setDAta(){
				
				  cout << "Enter a positive integer: ";
				  cin >> n;
             }
             
              getData(){
   				    
				  if (n == 0 || n == 1) {
				    is_prime = false;
				  }

				  for (int i = 2; i <= n/2; ++i) {
				    if (n % i == 0) {
				      is_prime = false;
				      break;
				    }
				  }
				
				  if (is_prime)
				    cout << n << " is a prime number";
				  else
				    cout << n << " is not a prime number";

               }
};
 
int main(){
	
	PrimeNumber pn;
	
	pn.setDAta();
	pn.getData();
	
	return 0;
}

