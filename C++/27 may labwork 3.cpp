#include<iostream>
using namespace std;
int main(){
	
    char password[100];
	int i  ;
	

	cout<<"Enter your password..";    cin>>password;
	
	try{
		if(password[i]>='A'&& password[i]<='Z'){
			throw password;
		}
		else{
			cout<<" password done ...";
		}
	}
catch(int n){
	cout<<"password not validate.."<<endl;
}      
catch(...){
	cout<<"General exception block.."<<endl;
}

return 0;

}

