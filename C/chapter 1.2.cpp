#include<iostream>
using namespace std;
int main()
{
	int i;
	char s[100];
	cout<<"enter a string:";
	cin>>s;
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
		    s[i]=s[i]+32;
		
		else if(s[i]>='a'&& s[i]<='z')
			s[i]=s[i]-32;
    }
    
		cout<<"string is toggle case\n"<<s;
}
