#include <iostream>
using namespace std;
 
class GeoCalculator {
		
		int operationNumber = 0;
		float radius=0;
		float area=0;
		float perimeter=0;
		float diameter = 0;
 
    	public:
    		
	    		setAreaOfCircle(){
	    			cout << "\nEnter the radius of circle : ";
    				cin  >> radius;
				}
				getAreaOfCircle(){
					area = 3.14 * radius * radius;
					cout << "Area of circle with radius " << radius << " is = " << area;
					cout << "\n-------------------------------";
				}
				
				
				setPeriOfCircle(){
					cout << "\nEnter the radius of circle : ";
    				cin  >> radius;
	    			
				}
				getPeriOfCircle(){
					perimeter = 2 * 3.14 * radius;
					cout << "Perimeter of circle with radius " << radius << " is = " << perimeter;
					cout << "\n-------------------------------";
				}
				
				
				setConOfCircle(){
					cout << "Enter the radius of circle : ";
    				cin  >> radius;
				}
				getConOfCircle(){
					diameter = 2 * radius;
					cout << "Diameter of circle with radius " << radius << " is = " << diameter;
					cout << "\n-------------------------------";

				}
	    		
				runSystem(){
					
					cout << "\n\n1) Area of Circle : ";
					cout << "\n2) Perimeter of Circle";
					cout << "\n3) Conversion of radius into Diameter.";
					
					cout << "\n\nPlease enter input: ";
					cin >> operationNumber;
					
					
					
					switch (operationNumber) {
						
				        case 1:
				        	
							setAreaOfCircle();
				        	getAreaOfCircle();
				            break;
				            
				        case 2:
				        	
							setPeriOfCircle();
				        	getPeriOfCircle();
				            break;
				            
				        case 3:
				        	
							setConOfCircle();
				        	getConOfCircle();
				            break;
				            
				        default:
				            cout << "Error! The operator is not correct";
			            break;
    				}
				}
    		
};
 
int main(){
	
	GeoCalculator calc;
	
	while(1){
		calc.runSystem();
	}
	
	return 0;
}
