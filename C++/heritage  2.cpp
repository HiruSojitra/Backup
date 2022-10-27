#include<iostream>
using namespace std;
class mother{
	
	public:
		
	   float height;
	   
	   void setData(){
	   	 cout<<"Enter height:";     cin>>this->height;
	   }
	   void getData(){
	   	 cout<<"height"<<this->height<<endl;
	   }
	   	 
};
class daughter:public mother{
	  
	  public:
	  	
	  	float height;
	  	
	  	void setData(){
	  		cout<<"Enter height:";    cin>>this->height;
		   }
		void getData(){
			cout<<"height"<<this->height<<endl;
		}   
};
int main(){
	 daughter d;
	// d.mother::setData();
	 d.setData();
	 
	 //d.mother::getData();
	 d.getData();
	 
	 return 0;
	 
}
