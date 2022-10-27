#include<iostream>
using namespace std;
class arithmetic{
	public:
		void calculate(){
			cout<<"arithmetic operators"<<endl;
		}
};
class operations:public arithmetic{
	public:
		calculate(int a,int b){
			
			cout<<"division is:"<<a/b<<endl;
		}
		calculate(int a,int b int c){
			cout<<"subtraction is:"<<a-b-b-c<<endl;
		}
			calculate(int a,int b)
		
		
};
