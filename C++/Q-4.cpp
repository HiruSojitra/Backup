#include<iostream>
#include<string.h>
using namespace std;

class exchange
{
	public:
		
	int chair1=5;
	int chair2=4;
	int temp;
	
	void setData()
	{
		
		cout<<"Enter two chair";
		cin>>chair1>>chair2;
    }
    
    void getData(){  
    	
		temp=chair1;
		chair1=chair2;
		chair2=temp;
    
		cout<<chair1<< " "<<chair2<<endl;
	}
};
int main(){
	 
  	 exchange e;
	 
	 e.setData();
	 e.getData();
	 
	 return 0;
}
