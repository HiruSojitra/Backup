#include<iostream>
using namespace std;
class shape{
	public:
		float width,height;
		
		shape(){
		    cout<<"Enter width ";             cin>>width;
			cout<<"Enter height ";            cin>>height;       	                               
		}
};
class triangle:public shape{
	public:
		void area(){
			
			cout<<"calculate triangle area:"<< 0.5*width*height<<endl;
		}
};
class rectangle:public shape{
	public:
		void area(){
			
			cout<<"calculate rectangle area:"<<width*height<<endl;
		}
};
int main(){
	
	rectangle r;
	triangle t;
	r.area();
	t.area();
	
	return 0;
}
