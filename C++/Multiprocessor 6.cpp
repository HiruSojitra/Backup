#include<iostream>
#include<string.h>
using namespace std;

class complex{

	public:
	
		int x;
		
		void setData(int x){
			
			this->x = x;
		}
		void getData(){
			
			cout<<"x ="<<this->x <<endl;
		}
		
		complex operator ++(){
			
			complex temp;
			
			temp.x= ++this->x;
			return temp;
		}
		complex operator --(){
			
			complex temp;
			
			temp.x= --this->x;
			return temp;
		}
	
};
int main(){
	
	complex c1,c2,c3,c4;
	
	c1.setData(5);
	c1.getData();
	c2.setData(15);
	c2.getData();
	
	c3 =++c1;
	c3.getData();
	
	c4 = --c2;
	c4.getData();
	
	return 0;
}


