#include<iostream>
#include<string.h>
using namespace std;

class message{
	
	private:
		char s2[50];
	public:
	    char s1[50];
		
		message(){
			cout<<"Enter a string..";   cin>>this->s1;
		}	
		void print(){
			cout<<"String is..."<<this->s1<<endl;
		}
		void print(char s2[50]){
			strcmp(this->s2,s2);
			cout<<"String is.."<<s2<<endl;
		}
};
int main(){
	message m;
	m.print();
	m.print("abcd");
	return 0;
}
