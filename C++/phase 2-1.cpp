#include<iostream>
using namespace std;
class multi{

      public:
      	
      int num, i, ans;
      
      void setData(){
	  
         cout<<"Enter the Number: ";
         cin>>num;
     }
     void getData(){
	 
         for(i=1; i<=10; i++){
		 
         ans = num*i;
         cout<<num<<" * "<<i<<" = "<<ans<<endl;
         }
         cout<<"multiplication is.."<<ans<<endl;
     }
};
int main(){
	multi m;
	m.setData();
	m.getData();
	
	return 0;
}
        
        
    
    
