#include <iostream>
using namespace std;
 
class Palindrome {
	
    	public:
				
					int n, num, digit, rev = 0;
    		
	          	setDAta(){
	          		
	          		cout << "Enter a positive number: ";
     				cin >> num;
	            }
             
              	getData(){
              		
              		n = num;

				     do{
				         digit = num % 10;
				         rev = (rev * 10) + digit;
				         num = num / 10;
				     } while (num != 0);
				
				     cout << "The reverse of the number is: " << rev << endl;
				
				     if (n == rev)
				         cout << "The number is a palindrome.";
				     else
				         cout << "The number is not a palindrome.";
				         
               }
};
 
int main(){
	
	Palindrome p;
	
	p.setDAta();
	p.getData();
	
	return 0;
}

