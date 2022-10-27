#include <iostream>
using namespace std;
 
class GreatestOfFour{
				    int a, b, c, d;
	
    	public:
	          	setDAta(){
	          		cout << "Enter First Number  : ";
    				cin >> a;
    				
    				cout << "Enter Second Number : ";
    				cin >> b;
    				
    				cout << "Enter Third Number  : ";
    				cin >> c;
    				
    				cout << "Enter Fourth Number : ";
    				cin >> d ;
	            }
             
              	getData(){
              		
              		if (a > b) {  
				        if (a > c) {  
				            if (a > d) {  
				                cout << "First is greatest";  
				            }  
				            else {  
				                cout << "Fourth is greatest";  
				            }  
				        }  
				    }  
				    else if (b > c) {  
				        if (b > d) {  
				            cout << "Second is greatest";  
				        }  
				        else {  
				            cout << "Fourth is greatest";  
				        }  
				    }  
				    else if (c > d) {  
				        cout << "Third is greatest";  
				    }  
				    else {  
				        cout << "Fourth is greatest";  
				    }  
               }
};
 
int main(){
	
	GreatestOfFour grt;
	
	grt.setDAta();
	grt.getData();
	
	return 0;
}

