#include <iostream>
#include <string.h>
using namespace std;
 
class Palindrome{
	
    	public:
    		
    			char string1[20];
			    int i, length;
			    int flag = 0;
    		
	          	setDAta(){
					cout << "Enter a string: ";
					cin >> string1;	          		
	            }
             
              	getData(){
              		
              		length = strlen(string1);
    
				    for(i=0;i < length ;i++){
				        if(string1[i] != string1[length-i-1]){
				            flag = 1;
				            break;
				           }
				        }
				    
				    if (flag) {
				        cout << string1 << " is not a palindrome" << endl; 
				    }    
				    else {
				        cout << string1 << " is a palindrome" << endl; 
				    }
              		
               }
};
 
int main(){
	
	Palindrome p;
	
	p.setDAta();
	p.getData();
	
	return 0;
}

