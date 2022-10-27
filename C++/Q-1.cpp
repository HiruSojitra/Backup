#include <iostream>
using namespace std;


class Cube {
	
    	public:
    		
			  int num;
			  int ans;
              
              setDAta(){
			 
			    cout<<"Enter any number: "<<endl;
			    cin>>num;
			 
			    ans = num * num * num;
    
             }
             
          	getData(){
		  
               cout << "Ans is : " << ans << endl;
            }
};


int main(){
	
	Cube c;
	
	c.setDAta();
	c.getData();
	
	return 0;
}

