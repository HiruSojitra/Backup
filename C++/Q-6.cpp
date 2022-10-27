#include<iostream>
using namespace std;
class Employee{
	 public:
	 	 void getData(int n,int l){
	 	 	
	 	 	if(l==6){
	 	 		cout<<"=>"<<n<<"Number is sent to Employee..";
	 	 	}
	 	 	else{
	 	 		cout<<"=> Enter 6 Digit Number.. ";
			  }
	 	    }
};
int main(){
	
	int n,a,l=0;
	
	cout<<"Enter 6 Digit Random Number..";
	cin>>n;
	
	a=n;
	while(a!=0){
		
		a=a/10;
		l++;
	}
	
	Employee o1;
	o1.getData(n,l);
	
	return 0;
}
