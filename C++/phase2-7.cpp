#include <iostream>
#include<stdio.h>
using namespace std;

 class Calculator{
 	
 	   public:
 	   	float area,radius,perimeter,diameter;
 	    float pi= 3.142857
 	   	
 	   	void setData(){
 	   		
 	   		cout<<"Enter radius of a circle..";
 	   		cin>>radius;
 	   		
 	   	    area= pi *radius *radius;
 	   	    perimeter= 2 * pi *radius;
 	   	    diameter = 2 * radius;
 	   		
		}
 	   	
 	   	 void getData()
 	   		
 	   		cout<<"Area of Circle is :"<< area<<endl;
 	   		cout<<"Perimeter of circle :"<<perimeter<<endl;
 	   		cout<<"diameter of circle :"<< diameter<< "units ."<<endl;
 	   		 
	
 };
int main(){
	
	Calculator c;
	
	c.setData();
	c.getData();
	
	return 0;
}

	

