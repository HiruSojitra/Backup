#include<iostream>
using namespace std;
class Calculator{
	
	   public:
	   	
	   	float amt,gst,total;
	   	
	   	void setData(){
	   		
	   	//	float amt,gst,total;
	   		
	   		cout<<"Enter the amount :";         cin>>amt;
	   		
	   		gst=amt*18/100;
	   		
	   		total=gst+amt;
	   	}
	   	 void getData(){
	   	 	
              cout<<"billing details are....";
	   	      cout<<"The amount is.."<< amt<<endl;
	   	      cout<<"The gst amout is.."<<gst<<endl;
	   	      cout<<"Your total amount is..."<<total<<endl;
		   }
};
int main(){
	
	Calculator c;
	c.setData();
	c.getData();
	
	return 0;
	
}
