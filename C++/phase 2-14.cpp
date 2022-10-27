#include<iostream>
using namespace std;
class Devlopment{
	
	   public:
	     int itrate;
		 float salary,itax,nsalary=0;
		  void setData(){
		 	
		 	cout<<"Enter salary..";        cin>>salary;
		 	 if(salary>30000){
		 	 	itax=salary*20/100;
		 	 	itrate=20;
			  }
			  else if(salary>=20000){
			  	itax=salary*15/100;
			  	itrate=15;
			  }
			  else{
			  	itax=salary*10/100;
			  	itrate=10;
			  }
			  nsalary=salary-itax;
		   }
		  void getData(){
		  	
		  	  cout<< "salary Rs.."<<salary;
		  	  cout<< "\nyour income tax 0 "<<itrate<<" %=Rs"<<itax;
		  	  cout<<" \nyour net salary = Rs" << nsalary;
		  } 	
};
int main(){
	
	  Devlopment d;
	  d.setData();
	  d.getData();
	  
	  return 0;
}
