#include<iostream>
using namespace std;
class cricket{
	  public:
	  	void getTotalOvers(){
	  		cout<<"Details of over :"<<endl;
		  }
}; 
class T20match : public cricket{
     public:
	    void getTotalOvers(){
	    	cricket::getTotalOvers();
			cout<<"Total 50 over of T20 match"<<endl;
	    }
};
class TestMatch:public cricket{
	   public: 
	     void getTotalOvers(){
	     	cout<<"Total 100 over of Test-Match"<<endl;
		 }
};
int main(){
	
    T20match a;
    TestMatch b;
	a.getTotalOvers();
	b.getTotalOvers();
}
