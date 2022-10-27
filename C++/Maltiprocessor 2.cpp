#include<iostream>
#include<string.h>
using namespace std;
class arguments{
	
	  private:
	  	
	  	int a,b,c,d;
	  public:
	      void print1(){
	      	cout<<"Enter 1 number..";    cin>>a;
	      	cout<<" "<<a<<" "<<endl;
	      	print2();
		  }	
		  void print2(){
		  	cout<<"Enter 2 number..";    cin>>b;
		  	cout<<" "<<b<<" "<<endl;
		  	print3();
		  }
		  void print3(){
		  	cout<<"Enter 3 number..";    cin>>c;
		  	cout<<" "<<c<<" "<<endl;
		  	print4();
		  }
		  void print4(){
		  	cout<<"Enter 4 number..";    cin>>d;
		  	cout<<" "<<d<<" "<<endl;
		  }
};
int main(){
	
	arguments a;
	a.print1();
	return 0;
}
