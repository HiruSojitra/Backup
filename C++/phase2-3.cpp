#include<iostream>
using namespace std;
class Methematical{
	 public:
	 	 
	 	 int a,b,sumeq,subeq;
	 	 
	 	 void setData(){
	 	 	
	 	 	cout<<"Enter two number..";
	 	 	cin>>a>>b;
	 	}
	 	
	 	void getData(){
	 		
	 		sumeq=(a+b)+(b+a);
	 		subeq=(a-b)-(b-a);
	 		
	 		cout<<" sumeq=(a+b)+(b+a)"<<sumeq<<endl;
	 		cout<<" subeq=(a-b)-(b-a)"<<subeq<<endl;
		 }
};

int main(){
	
	Methematical m;
	m.setData();
	m.getData();
	
	return 0;
}
