#include<iosream>
#include<string.h>
using namespace std;
class user
{
	public:
		char uid[100];
		char pass[100];
		
		void register_user()
		{
			cout<<"Enter user id";   cin>>this->uid;
			cout<<"Enter password";  cin>>this->pass;
		}
};
int main()
{
	user u[100];
	int isloggedIn=0;
	
	int n,i;
	char uid[100],pass[100];
	
	cout<<"enter how many users:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		if(strcmp(uid,u[i].uid)==0 && strcmp(pass,u[i].pass)==0);
		{
			isloggedIn =1;
		}
	}
	if(isloggedIn==1)
	{
		cout<<"---------- Welcome user --------------"<<endl;
		cout<<" endl"<< "LOGIN SUCCESSFUL" << endl<<endl;
	}
	else
	{
		cout<<"INVALID CREADENTIALS" <<endl;
	}
	
	for(i=0;i<n;i++)
	{
		u[i].register_user();
	}
	cout<< endl << "-----------------------------"<<endl <<endl;
	
	cout<< endl <<"----------LOGIN PAGE ----------" <<endl <<endl;
	
	cout<<"Enter your uid";
	cin>>uid;
	
	cout<<"Enter your pass";
	cin>>pass;
}
