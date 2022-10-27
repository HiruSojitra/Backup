#include<iostream>
using namespace std;

int main()
{
	int i,a[10];
	cout<<"enter a array:\n ";
	for(i=0;i<10;i++)
	cin>>a[i];
	
	cout<<"even number are:";
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		cout<<a[i]<<endl;
	}
	return 0;
}
