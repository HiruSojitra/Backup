#include <iostream>
using namespace std;
 
class NumberOfDigits{
	
    	public:
				     
    			int count = 0;
    			int num;
    		
	          	setDAta(){
	          		
				    cout << "Enter any number : ";
    				cin >> num;

	          		
					  
	            }
             
              	getData(){
              		
				    int temp = num;
				    
				    while(temp != 0) {
				        count++;
				        temp /= 10;
				    }
				    cout << endl << "Total digits in " << num << " : "  << count;
              		
               }
};
 
int main(){
	
	NumberOfDigits n;
	
	n.setDAta();
	n.getData();
	
	return 0;
}

