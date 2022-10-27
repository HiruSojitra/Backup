#include<iostream>
#include<string.h>
using namespace std;

class SuperMarket{
	public:
		int no = 0;
		int qun = 0;
		int tax = 0;
		int dis = 0;
		
		string name;
	
	public:
		void setdata(){
			cout << " \n\n  Enter item no : ";
			cin >> no;
			
			cout << " \n\n  Enter item name : ";
		    cin >> name;
			
		    cout << " Enter item Quantity  : ";
			cin >> qun;
			
			cout << " Enter item Tax  : ";
			cin >> tax;
			
			cout << " Enter item Discount : ";
		    cin >> dis;
		}	
		
		void getdata() {
			cout << "\n\n no : " << no;
			cout << "\nName : " << name ;
			cout << "\nQuantity : " << qun;
			cout << "\nTax : " << tax;
			cout << "\nDiscount : " << dis;
		}
};

int main() {

	char username[100];
	char password[100];
	
	char systemStoredUsername[100];
	char systemStoredPassword[100];
	
	cout << "User Account Creation: ----------";
	
	cout << "\nEnter Your Username : ";
	cin >> systemStoredUsername;
	
	cout << "\nEnter Your Password : ";
    cin >> systemStoredPassword;

	
	cout << "Your Account has been created in system.\n\n";
	
	
	cout << "--------------------------------------";
	
	
	cout << "Please Enter Your Login as below to enter in the system.\n";
	
	
	cout << "Enter Username : ";
	cin  >> username;;
	
	cout << "\nEnter Password : ";
	cin  >> password;
	
if (strcmp(username, systemStoredUsername) == 0 && strcmp(password, systemStoredPassword)==0) {
		
		cout << "Entered into System\n";
		
		
		SuperMarket s[3];
		
//		SuperMarket sm1; 300  DHARM
//		SuperMarket sm1; 200 HEERU
//		SuperMarket sm2; 100 JAYDIP
		
		
		for (int i=0; i<3; i++) {
			s[i].setdata();
		}
		
		int searchInput;
		
		cout << "Search for data";
		cin  >> searchInput;
		
		s[searchInput].getdata();
		
		
		for (int i=0; i<3; i++) {
			
			for (int j=0; j<3-i; j++) {
				
				if (s[j].no > s[j+1].no){
				
				SuperMarket	temp = s[j];
					s[j] = s[j+1];
					s[j+1] = temp; 
				}
			}
		}
		
	for (int i=0; i<3; i++) {
			s[i].getdata();
		}
}
 else {
		cout << "Wrong Username / Password ";
	}
	
	return 0;
}


