#include <iostream>
using namespace std;

class Teacher {
	     
	     public:
	     	
         int decimal, binary = 0, remainder, product = 1;
         
         void setData(){
		 
           cout<<"Enter decimal value :";     
           cin >> decimal;
         
           while (decimal != 0) {
           remainder = decimal % 2;
           binary = binary + (remainder * product);
           decimal = decimal / 2;
           product *= 10;
         }
      }
         void getData(){
         	
		    cout << "The number in the binary form is: " << binary ;
         }
};
int main(){
	
	Teacher t;
	t.setData();
	t.getData();
	
	return 0;
}
