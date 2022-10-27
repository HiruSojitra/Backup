#include <iostream>
using namespace std;
 
class TempConverter {
	
		int operationNumber = 0;
		float fahren, celsius;
	
    	public:
    		
	    		setFah(){
	    			cout<<"\nEnter Fahrenheit : ";
					cin>>fahren;
	            }
	            
	            getCel(){
	            	celsius = 5 * (fahren - 32) / 9;
	            	cout << fahren <<" Fahrenheit is equal to " << celsius <<" Celsius";
				}
				
				setCel(){
	    			cout<<"\nEnter Celsius : ";
					cin>>celsius;
	            }
	            
	            getFah(){
	            	fahren = (9.0/5.0) * celsius + 32;
					cout << celsius <<" Celsius is equal to " << fahren << " Fahrenheit";
				} 
				
				runSystem(){
					
					cout << "\n\n1) From Fahrenheit to Celsius : ";
					cout << "\n2) From Celsius to Fahrenheit : ";
					
					cout << "\n\nPlease enter input: ";
					cin >> operationNumber;
					
					
					switch (operationNumber) {
						
				        case 1:
							setFah();
				        	getCel();
				            break;
				            
				        case 2:
							setCel();
				        	getFah();
				            break;
				            
				        default:
				            cout << "Error! The operator is not correct";
			            break;
    				}
				}
};
 
int main(){
	
	TempConverter tc;
	
	while(1){
		tc.runSystem();
	}
	
	return 0;
}
