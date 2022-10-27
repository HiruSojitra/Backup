#include<iostream>
using namespace std;
class Calculate{
	
	public:
		
		int p,r,t,i;
		
		cout << " Calculate the Simple Interest :";
		cout << " -------------------------------";
		 
		void setData(){
			
	        cout<<" Input the Principle: ";
        	cin>>p;
	        cout<<" Input the Rate of Interest: ";
	        cin>>r;
	        cout<<" Input the Time: ";
          	cin>>t;
          	
	        i=(p*r*t)/100;
	    }
	        
	    void getDAta(){
		    
	         cout<<" The Simple interest for the amount "<<p<<" for "<<t<<" years  "<<r<<" % is: "<<i;
             cout << endl;
	
       }
};
int main(){
	
	Calculate c;
	
	c.setData();
	
	c.getDAta();
	
	return 0;
}
