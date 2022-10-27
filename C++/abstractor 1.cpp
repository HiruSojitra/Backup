#include<iostream>
using namespace std;

class future{
	
	public:
		virtual void movephone()=0;
		virtual void dancephone()=0;
		
		void disp(){
			cout<<"disp mothod from class A.."<<endl;
		}
};
class C:public future{
	
	public:
		void movephone(){
			cout<<"phone is moving..."<<endl;
		}
};
class D:public C {
	
	public:
		void dancephone(){
			cout<<"phone is dancing..."<<endl;
		}
};
int main(){
	
	D o1;
	o1.disp();
	o1.movephone();
	o1.dancephone();
	
	return 0;
	
}
