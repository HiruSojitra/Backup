#include <iostream>
using namespace std;
 
class SumofDigits {
	
		public:
			int n,sum=0,m;	     
    		
	          	setDAta(){
	    			cout<<"Enter a number: ";    
					cin>>n;        		
	            }
             
              	getData(){
              		
              		while(n>0){    
						m=n%10;    
						sum=sum+m;    
						n=n/10;    
					}    
					cout<<"Sum is : "<<sum<<endl;   
              		
               }
};
 
int main(){
	
	SumofDigits s;
	
	s.setDAta();
	s.getData();
	
	return 0;
}


