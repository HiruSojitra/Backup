
4  #include <iostream>
#include <stdio.h>
using namespace std;
 

class basicInfo
{
      
    public:
    	
    	char    name[30];
        int     empId;
        char    gender;
        
        void getBasicInfo()
        {
            cout << "Enter Name: "; 
            cin>>name;
            cout << "Enter Emp. Id: ";
            cin  >> empId;
            cout << "Enter Gender: ";
            cin  >> gender;
        }
};
 

class deptInfo
{
  
    public:
    	
    	char    deptName[30];
        char    assignedWork[30];
        int     time2complete;
        
        void getDeptInfo()
        {
            cout << "Enter Department Name: "; 
            cin>> deptName;
            cout << "Enter assigned work: ";
            cin>> assignedWork ;
            cout << "Enter time in hours to complete work: ";
            cin  >> time2complete;
        }
};
 

class employee:public basicInfo, public deptInfo
{
    public:
        void getEmployeeInfo(){
        	
            cout << "Enter employee's basic info: " << endl;
            getBasicInfo();     
            
			cout << "Enter employee's department info: " << endl;
            getDeptInfo();      
        }
        void printEmployeeInfo()
        {
            cout << "Employee's Information is:\n\n "     << endl;
            cout << "Basic Information...:\n\n"       << endl;
            cout << "Name: "      << name   << endl;     
            cout << "Employee ID: " << empId  << endl;        
            cout << "Gender: "        << gender << endl << endl;
             
            cout << "Department Information...:"  << endl;
            cout << "Department Name: "           << deptName   << endl; 
            cout << "Assigned Work: "             << assignedWork << endl; 
            cout << "Time to complete work: "     << time2complete<< endl; 
        }
};
 
int main()
{
   
    employee emp;
     
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
     
    return 0;
}
