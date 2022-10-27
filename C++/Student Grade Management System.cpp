#include <iostream>
using namespace std;
 
class StudGradeSystem {
	
		int maths;
		int phy;
		int chem;
		int totalStudents;
	
    	public:
    		
	    		setTotalStudent(){
	    			cout<<"Enter Total Number of Students: ";
					cin>>totalStudents;
	            }
	            
	            getTotalStudent(){
					return totalStudents;
				}
    		
	          	setData(){
	    			cout<<"\nEnter grades for Maths: ";
					cin>>maths;
					
					cout<<"Enter grades for Physics: ";
					cin>>phy;
					
					cout<<"Enter grades for Chemistry: ";
					cin>>chem;
	            }
             
              	getData(){
              		
					if(maths>80 && phy>75 && chem>72){
						cout<<"your grade is A";    
					}else if(60<=maths<=80 && 55<=phy<=75 && 50<=chem<=72){
						cout<<"your grade is B";    
					}else if(40<=maths<60 && 35<=phy<55 && 35<=chem<50){
						cout<<"your grade is C";    
					}else{
						cout<<"your grade is D";    
					}
              		
               }
};
 
int main(){
	
	StudGradeSystem sgs;
	sgs.setTotalStudent();
	int totalStudents = sgs.getTotalStudent();
	
	for(int i=1; i<=totalStudents; i++){
		

		cout<<"\nEnter Data for Student : " << i;
		sgs.setData();
		sgs.getData();	
		
		
		cout<<""<<endl;
		cout<<""<<endl;
	}
	
	return 0;
}
