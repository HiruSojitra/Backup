#include<iostream>
using namespace std;
class student{
	
	int id;
	
	public:
       student(int a=0){
       	id=a;
	   }	
	   
	   int value() const{
	   	
           return id;	   
	   }
};
int main(){
	
	student b(10);
	cout<<b.value();
	
	return 0;
}


