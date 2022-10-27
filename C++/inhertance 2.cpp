#include<iostream>
using namespace std;
class p{
	
	public:
		float celsius;
		
		void getData(){
		   cout<<"Enter celsius:";   cin>>celsius;	
		}
};
class q: public p{
	
	public:
		 float fehrenheit;
		 
		 tofehrenheit(){
		 	fehrenheit=(celsius*1.8)+32;
		 	cout<<"celsius to fehrenheit: "<< fehrenheit<<endl;
		 } 
};
class r:public q{
	
	public:
		
		float kelvin;
			
		tokelvin(){
			kelvin=celsius+273.15;
			cout<<"celsius to kelvin:"<<kelvin<<endl;
			}
};
int main(){
	r r1;
	
	r1.getData();
	r1.tofehrenheit();
	r1.tokelvin();
	
	return 0;
}

