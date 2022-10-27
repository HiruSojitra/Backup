#include <iostream>
#include <cstring>
#define max 20
using namespace std;

class Employee {
		public :
				struct employee {
				    	int id;
				        string name;
				        string email;
				        string desig;
				        int exp;
				        int age;
				};
};

class EMS : public Employee {
		public :
				int num ;
				int option ;
			    employee emp[max];
				
				insert() {
				        if (num < max) {
				                int i = num;
				                num++;
				
				                cout << "\n\n Enter the information of the Employee\n";
				                
				                cout << " Employee ID : ";
				                cin >> emp[i].id;
				                
				                cout << " Name : ";
				                cin >> emp[i].name;
								
								cout << " Email : ";
				                cin >> emp[i].email;
				                
				                cout << " Designation : ";
				                cin >> emp[i].desig;
				
				                cout << " Experience : ";
				                cin >> emp[i].exp;
				
				                cout << " Age : ";
				                cin >> emp[i].age;
				                
				                cout << "\n Record has been added!\n\n\n";
				        } else {
				                cout << " Employee Table Full\n\n\n";
				        }
				}
				
				deleteIndex(int i) {
				        for (int j = i; j < num - 1; j++) {
				                emp[j].id = emp[j + 1].id;
				                emp[j].name = emp[j + 1].name;
				                emp[j].email = emp[j + 1].email;
				                emp[j].desig = emp[j + 1].desig;
				                emp[j].exp = emp[j + 1].exp;
				                emp[j].age = emp[j + 1].age;
				        }
				        cout << "\n Record has been deleted!\n\n\n";
				}
				
				deleteRecord() {
					
				        int id;
				        bool found;
				        
				        cout << " Enter the Employee ID to Delete Record: ";
				        cin >> id;
				        
				        for (int i = 0; i < num; i++) {
				                if (emp[i].id == id) {
				                        deleteIndex(i);
				                        num--;
				                        found = true;
				                        break;
				                }
				        }
				        
				        if(found == false){
				        	cout << " No employee exist with given ID\n\n\n";
						}
				}
				
				search() {
					
				        int id;
				        bool found;
				        
				        cout << " Enter the Employee ID to Search Record: ";
				        cin >> id;
				        
				        for (int i = 0; i < num; i++) {
				
				                // If employee is found
				                if (emp[i].id == id) {
				                		cout << "-----------------------------------\n";
				                        cout << " Employee ID : " << emp[i].id << "\n";
				                        cout << " Name        : " << emp[i].name << "\n";
				                        cout << " Email       : " << emp[i].email << "\n";
				                        cout << " Designation : " << emp[i].desig << "\n";
				                        cout << " Experience  : " << emp[i].exp << "\n";
				                        cout << " Age         : " << emp[i].age << "\n";
				                        cout << "-----------------------------------\n\n\n";
				                        found = true;
				                        break;
				                }
				        }
				        
				        if(found == false){
				        	cout << " No employee exist with given ID\n\n\n";
						}
				
				}
				
				update() {
					
				        int id;
				        bool found;
				        
				        cout << " Enter the Employee ID to Update Record: ";
				        cin >> id;
				        
				        for (int i = 0; i < num; i++) {
				
				                // If employee is found
				                if (emp[i].id == id) {
				                		cout << "\n------------Existing Record-----\n";
				                        cout << " Employee ID : " << emp[i].id << "\n";
				                        cout << " Name        : " << emp[i].name << "\n";
				                        cout << " Email       : " << emp[i].email << "\n";
				                        cout << " Designation : " << emp[i].desig << "\n";
				                        cout << " Experience  : " << emp[i].exp << "\n";
				                        cout << " Age         : " << emp[i].age << "\n";
				                        cout << "-----------------------------------\n\n\n";
				                
								        
				                        cout << "------------Update Record-------\n";
				                
						                cout << " Name : ";
						                cin >> emp[i].name;
						
						                cout << " Employee ID : ";
						                cin >> emp[i].id;
						
						                cout << " Designation : ";
						                cin >> emp[i].desig;
						
						                cout << " Experience : ";
						                cin >> emp[i].exp;
						
						                cout << " Age : ";
						                cin >> emp[i].age;
						                
						                cout << "\n Record has been updated successfully!\n\n\n";
						                
				                        found = true;
				                        break;
				                }
				        }
				        
				        if(found == false){
				        	cout << " No employee exist with given ID\n\n\n";
						}
				
				}
								
				showAll() {
					
				        for (int i = 0; i < num; i++) {
										cout << " -----------------------------------\n";
				                        cout << " Employee ID : " << emp[i].id << "\n";
				                        cout << " Name        : " << emp[i].name << "\n";
				                        cout << " Email       : " << emp[i].email << "\n";
				                        cout << " Designation : " << emp[i].desig << "\n";
				                        cout << " Experience  : " << emp[i].exp << "\n";
				                        cout << " Age         : " << emp[i].age << "\n";
				                        cout << " -----------------------------------\n\n\n";
				        }
				}
				
				int showMenu() {
				
				        cout << "-------------------------Employee Management System-------------------------\n\n";
				
				        cout << " Available Options:\n\n";
				        cout << " 1) Insert New Record\n";
				        cout << " 2) Update Record\n";
				        cout << " 3) Delete Record\n";
				        cout << " 4) Search a Record\n";
				        cout << " 5) Show all Records\n";
				        cout << " 0) Exit\n";
				
				        cout << "\n Enter Opeartion Number: ";
				        cin >> option;
				        
				        switch (option) {
										
								        case 1:
									        	insert();
									            break;
										case 2:
												if(num == 0){
								        			cout << " No employee is exist in the system to delete\n";
												}else{
										        	update();
												}
									            
									            break;
										case 3:
											
												if(num == 0){
								        			cout << " No employee is exist in the system to delete\n\n\n";
												}else{
 								              	 	deleteRecord();
												}
									            break;
								            
								        case 4:
									        	if(num == 0){
								        			cout << " No employee is exist in the system to search\n\n\n";
												}else{
								               		search();
												}
									            break;
											
										case 5:
												if(num == 0){
								        			cout << " No employee is exist in the system to show\n\n\n";
												}else{
								               		showAll();
												}
								           		 break;
										
										case 0:
								        			exit (0);
										            break;
												
								        default:
								            cout << " Invalid! option\n\n\n";
							            break;
				    				}
				}
				
};
int main() {
		
		EMS ems;
		
		while(1){
			ems.showMenu();
		}
        
        return 0;
	}
