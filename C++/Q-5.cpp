#include <iostream>
using namespace std;
 
int main()
{
	int ascii;
	char character;
	cout<<"Enter ASCII: \n";
	cin>>ascii;
	
	char ch = char(ascii);
	cout<< "character is: "<<ch<<endl;

	return 0;
}

