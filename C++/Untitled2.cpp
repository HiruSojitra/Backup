#include<iostream>
using namespace std;
class B{
	 public:
	 	int b,e,i,ans=l;
	 	
	 	void setData(){
	 		cout<<"Enter value of Base:";          cin>>b;
	 		cout<<"Enter value of Exponent:";      cin>>e;
		 }
		void getData(){
			for(i=0;i<e;i++){
				ans=ans*b;
			}
			cout<<"The Answer is :"<<ans;
		} 
};
int main(){
	
	B.o1;
	o1.setData();
	o1.getData();
	return 0;
}
