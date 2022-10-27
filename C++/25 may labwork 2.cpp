#include<iostream>
using namespace std;
class Area{
	
	  public:
	  	int r,b,h,w,height;
	    virtual void calculate()=0;
};
class areaOfCircle:public Area{
	
	  public:
	  	void calculate(){
	  		cout<<"Area of circle is :"<<endl;
	  		cout<<"Enter radius :";              cin>>r;
	  		cout<<"Area :"<<3.14*r*r<<endl;
	  	}
};
class areaOfTriangle:public Area{
	
	  public:
	  	void calculate(){
	  		cout<<"Area of triangle is :"<<endl;
	  		cout<<"Enter base : ";                cin>>b;
	  		cout<<"Enter height :";               cin>>h;
	  		cout<<"Area :"<<0.5*b*h<<endl;
		  }
};
class areaOfRectangle:public Area{
	  
	  public:
	  	void calculate(){
	  		cout<<"Area of rectangle is :"<<endl;
	  		cout<<"Enter width :";                 cin>>w;
	  		cout<<"Enter height :";                cin>>height;
	  		cout<<"Area :"<<w*height<<endl;
		  }
};
int main(){
	
    areaOfCircle o1;
	areaOfTriangle o2;
	areaOfRectangle o3;
	
	o1.calculate();
	o2.calculate();
	o3.calculate();
	return 0;
	
}
