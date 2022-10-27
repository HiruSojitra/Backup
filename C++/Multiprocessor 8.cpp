#include<iostream>
using namespace std;
class Distances{
	
	  public:
	  	int a;
	  	 
	  	 void setData(){
	  	 	 cout<<"Enter distance..";      cin>>this->a;
		   }
		 void getData(){
		 	 cout<<"Distance is (KM).."<<this->a<<endl;
		 }
		 
		 Distances operator + (Distances n){
		 	Distances temp;
		 	temp.a=this->a+n.a;
		 	return temp;
		 }  
};
int main(){
	
	Distances d1,d2,d3;
	cout<<"first(KM).."<<endl;
	d1.setData();
	cout<<"second(km).."<<endl;
	d2.setData();
	
	d3=d1+d2;
	d3.getData();
	return 0;
}
