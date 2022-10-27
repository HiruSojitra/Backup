#include <iostream>
using namespace std;
 
class Fibonacci{
	
    	public:
				
					int n, t1 = 0, t2 = 1, nextTerm = 0;
    		
	          	setDAta(){
	          		
	          		cout << "Enter the number of terms: ";
    				cin >> n;	
	            }
             
              	getData(){
              		
              			cout << "Fibonacci Series: ";

					    for (int i = 1; i <= n; ++i) {
					        if(i == 1) {
					            cout << t1 << ", ";
					            continue;
					        }
					        if(i == 2) {
					            cout << t2 << ", ";
					            continue;
					        }
					        nextTerm = t1 + t2;
					        t1 = t2;
					        t2 = nextTerm;
					        
					        cout << nextTerm << ", ";
   				 }
              		
               }
};
 
int main(){
	
	Fibonacci f;
	
	f.setDAta();
	f.getData();
	
	return 0;
}

