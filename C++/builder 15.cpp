#include<iostream>
using namespace std;
	class student{
	  int a, b,x,y,z,add;
	  public:
	  
	  void input(){
		  cout << "Enter the value of x and y:"<<endl;
		  cin >> x>>y;
	  }
	 
	  friend void add(student &n);
	  
	  void getData(){
	  	 cout << "The sum is :" << z<<endl;
	  }
	  	 
	};
	
	  void add(student &n){
	   n.add = n.a + n.b;
	  }
	  
  int main() {
  	
   student n1;
   n1.input();
   add(n1);
   n1.getData();
   return 0;
  }

