#include <iostream>
#include <conio.h>
using namespace std;

class Student{

        public:
        	
          int i,num, evenSum=0,evenCount=0, oddSum=0,oddCount=0;    
          int evenAvg;   
		  
		  void setData(){
		                    
            cout<<"Enter the value for num: ";     
            cin>>num;
         }
          void getData(){
		  
            for(i=1; i<=num; i++){
			           
            if(i % 2==0){               
            evenSum=evenSum+i;
            evenCount++;
            }
           else{                            
            oddSum=oddSum+i;
            oddCount++;
            }
          } 
            evenAvg=evenSum/evenCount;                      

          cout<<"Average of even numbers are: "<<evenAvg;
        }
};

int main(){
	
	 Student s;
	 s.setData();
	 s.getData();
	 
	 return 0;
}
