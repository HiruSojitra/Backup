#include<iostream>
using namespace std;
class Admin{
	   
	   public:
	     char company_name[100];
         int manager_salary;
         int employee_salary;
         int total_staff;
         int total_annual_revenue;
         char can_terminate[100];
         
       void setData(){
       	   cout<<"Enter company name..";
       	   cin>>company_name;
       	   cout<<"Enter total annual revenue..";
       	   cin>>total_annual_revenue;
       	   cout<<"Enter can terminate..";
       	   cin>>can_terminate;
       }
       	   
       	void Access(){
       		
       		cout<<"company name = "<<company_name<<endl
       		    <<"total annual revenue = "<<total_annual_revenue << endl
       		    <<"can terminate = "<<can_terminate<<endl;
       }  
};
class Manager : public Admin{
	   
	   public:
	   	
	   	void setData(){
	   		
	   		cout<<"Enter manager salary..";          cin>>manager_salary;
	   		cout<<"Enter total staff...";            cin>>total_staff;
	   		
	   	}
	   	void Access(){
	   		
	   		  cout<<"manager salary = "<< manager_salary<<endl
	   		      <<"total staff = "<< total_staff<<endl;
		   }
};
class Employee : public Manager {
	
	   public:
	   	
	   	void setData(){
	   		
	   		cout<<"Enter Employee salary =  " ;            cin>>employee_salary;
	   		cout<<"Enter total staff =  " ;                cin>> total_staff;
	   }
	   void Access(){
	   	       
	   	       cout<<"Employee salary = "<<employee_salary
	   	           <<"total staff = "<<  total_staff<<endl;
	   }
		   
};
int main(){
	
	Admin a;
	Manager m;
	Employee e;
	
	cout<<endl<<"Enter Admin Detail..."<<endl;
	a.setData();
	a.Access();
	
	cout<<endl<<"Enter Manager Detail..."<<endl;
	m.setData();
	m.Access();
	
	cout<<endl<<"Enter employee Detail..."<<endl;
	e.setData();
	e.Access();
	
	return 0;
	
}
