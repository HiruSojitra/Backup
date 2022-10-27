#include <cmath>
#include <iostream>
using namespace std;
 
class Armstrong {
	
    	public:
				   int num, originalNum, remainder, n = 0, result = 0, power;
				
	          	setDAta(){
	          		
	          		cout << "Enter a three-digit integer: ";
				    cin >> num;
				    originalNum = num;
	          		
	            }
             
              	getData(){
              		
					while (originalNum != 0) {
				      originalNum /= 10;
				      ++n;
				   }
				   
				   originalNum = num;
				
				   while (originalNum != 0) {
				   	
				      remainder = originalNum % 10;
				      power = round(pow(remainder, n));
				      result += power;
				      originalNum /= 10;
				   }
              		
              		if (result == num)
				      cout << num << " is an Armstrong number.";
				   else
				      cout << num << " is not an Armstrong number.";
				   return 0;
               }
};
 
int main(){
	
	Armstrong  arm;
	
	arm.setDAta();
	arm.getData();
	
	return 0;
}

