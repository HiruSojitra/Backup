#include <iostream>
using namespace std;
 
class EMICalc {
	
		float loanAmount, rate, years, totalAmount, monthlyEMI;
	
    	public:
    		
	    		setData(){

	    			cout<<"Enter the loan amount: ";
					cin>>loanAmount;
					
					cout<<"\nEnter the interest rate: ";
					cin>>rate;
					
					cout<<"\nThe number of years: ";
					cin>>years;
	            }
	            
	            getData(){
	            	totalAmount=(years*loanAmount)+(years*loanAmount*(rate/100.00));
	            	
					monthlyEMI=totalAmount/(years*12);
				
					cout<<"\nTotal amount to be paid: "<<totalAmount<<endl;
					cout<<"Total interest: "<<totalAmount-(years*loanAmount)<<endl;
					cout<<"Monthly amount to be paid: "<<monthlyEMI<<endl;
				}
};
 
int main(){
	
	EMICalc ec;
	
	ec.setData();
	ec.getData();
	
	return 0;
}
