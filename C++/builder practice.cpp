#include<iostream>
#include<string.h>
using namespace std;
class bank
{
	public:
           int phone_number,account_number;
		   char name[100];
		   char mail[100];
		   char person[1000];
		   int old_money=20000;
		   int new_money=0;
		   int total_money=0;
		   
		   void banking(){
		   	   
		   	   cout<<"                  -:BANK MANAGEMENT SYSTEM:-               \n";
		   	   cout<<"----------------------------------------------------------\n";
		   	   cout<<"                 -: Designed n Programed by :-            \n";
		   	   cout<<"----------------------------------------------------------\n";
		   	   cout<<"                    HERRU SOJITRA                         \n";
		   	   
		   	   cout<<"  -: press A to log as Administrator or S to log in as staff :-"
		   	   cin>>person;
		   	   
		   	switch(person){
		   		
		   		case 'a':
		   			cout<<"--------------------------------------------------------\n";
		   			cout<<"                  -: Welcome as Administrator:-         \n";
		   			cout<<"--------------------------------------------------------\n";
		   			
		   		break;
				   
				case "s":
				    cout<<"----------------------------------------------------------\n";
					cout<<"                  -: Welcome as STAFF :-                  \n";
					cout<<"----------------------------------------------------------\n";
					
					cout<<"Enter name\n";
					cin>>name;
					cout<<"Enter Account_number\n";
					cout>>account_number;
					cout<<"Enter phone_number\n";
					cout>>phone_number;
					cout<<"Enter e-mail";
					cin>>E-mail;
					
					cout<<"\n----------------------------------------------------------------------------------------------\n";
					
					  cout<<"name"<<name<<"account-number"<<account_number<<"phone_number"<<phone_number<<"Email"<<e-mail;
					
					cout<<"\n------------------------------------------------------------------------------------------------\n";
					
					cout<<"\n\n\n\t\t\t  Press [1] to Deposite the money\n\n";
					cout<<"\n\n\n\t\t\t  Press [2] to Transfer the money\n\n";
					cout<<"\n\n\n\t\t\t  Press [3] to withdraw the money\n\n";     	
					cin>>input;
		        }
		        
		    switch(input){
		    	
		    	
		    	case 1:
		    		cout<<"\n\nDeposite the money\n\n";
		    		cin>> newmoney;
		    		
		    		cout<<" \n your old amount is\n\n"<<old money;
		    		
		    		total money= newmoney+old money;
		    		cout<<"\n congrats your amount has been deposite  & your new balance is  "<< total money;
				break;
				
				case 2:
				    cout<<"\n\n Transfer the money\n\n";
					cin>> newmoney;
					
					cout<<"\n your old amount is \n\n"<<old money;
					
					total money=old money-newmoney;
					
					cout<<"\n congrats your amount has been transfer & your balance is "<< total money;
					
				break;
				
				case 3:
				    cout<<"\n\n Withdraw the money\n\n";
				    cin>>newmoney;
				    
			      	cout<<"\n your old amount is\n\n"<<old money;
			      	
			      	total money=old money-newmoney;
			      	
			      	cout<<"congrats your amount has been withdraw & your balance is " << total money;
			      	
			    break;  	
						 
			} 
			
int main()
{
	
	bank b;
	b.banking();
	
	return 0;
}			   
		  			   
		
		   	   
		
