#include<iostream>
using namespace std;
class Triangle{
	   public:
	     int b=56,h=21;
	     float area;
	   	
	   	void setData(){
	   		 
	   		 cout<<"Enter value of base and height.."<<endl;
	   		 area=0.5*56*21;
		   }
		void getData(){
			
			cout<<"area of triangle.."<<area<<endl;
		}   
};
int main(){
	
	Triangle t;
	t.setData();
	t.getData();
	
	return 0;
}
