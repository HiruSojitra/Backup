#include<iostream>
using namespace std;
class Root{
	
	private:
		float number;
		float root=1;
		float i=0;
	
	public:
	    void getData(){
	    	cout<<"Enter any number..";
	    	cin>>number;
		}	
		void display(){
			
			while(1){
				
				i=i+1;
				root=(number/root+root)/2;
				if(i==number+1){
					break;
					}
			}
			cout<<endl<<"Root is :"<<root;
		}
};
int main(){
	
	Root r;
	r.getData();
	r.display();
	
	return 0;
}
