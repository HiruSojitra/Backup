#include<iostream>
using namespace std;
class India{
	
	 public:
	 	
	 	void wearing(){
	 		
	 		cout<<"Dhoti - Kurta.." << endl;
		 }
};
class pak : public India{
	
	 public:
	 	
	 	void wearing(){
	 		
	 		cout<<"Pathani - Kurta.." << endl;
	 		India::wearing();
		 }
};
int main(){
	
	pak o1;
	o1.wearing();
	
	return 0;
}


