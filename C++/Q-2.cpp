#include<iostream>
using namespace std;

class multi
{
      int a,b,c,d;
	  public:
	    setData(){
	    	
	    	cout<<"Enter three number..";
	    	cin>>a>>b>>c;
		}
		getData(){
			
			d=a*b*c;
			cout<<"Multiplication"<<a*b*c<<endl;
		}	
};
int main(){
	
	multi m;
	m.setData();
	m.getData();
}
