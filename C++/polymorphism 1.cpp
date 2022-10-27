#include<iostream>
using namespace std;
class arithmetic{
	public:
		void calculate(){
			cout<<"arithmetic operations"<<endl;
		}
};
class operations:public arithmetic{
     public:
	   void calculate(int a,int b){
	       cout<<"divison is :"<<a/b<<endl;
	    }
	   void calculate(int a,int b,int c){
	   	   cout<<"subtraction is :"<<a-b-c<<endl;
	   }
	   void calculate(int a,int b,int c,int d){
	   	   cout<<"multiplication is :"<<a*b*c*d<<endl;
	   }
	   void calculate(int a,int b,int c,int d,int e){
	       cout<<"addition is"<<a+b+c+d+e<<endl;
	   }
};
int main(){
	
    operations o;
	o.calculate(20,5);
	o.calculate(65,47,30);
	o.calculate(5,4,3,2);
	o.calculate(25,12,42,10,6);
	return 0;
}


