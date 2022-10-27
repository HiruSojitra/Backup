#include <iostream>
using namespace std;
 
class StudGradeSystem {
	
		int maths=0;
		int phy=0;
		int chem=0;
		int totalStudents=0;
	
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
					}else if( (maths>=60 ||  maths<=80) && (phy>=55 ||  phy<=75) && (chem>=50 || chem<=72)){
						cout<<"your grade is B";    
					}else if((maths>=40 || maths<60) &&  (phy>=35  ||  phy<55) && (chem>=35 || chem<50)){
						cout<<"your grade is C";    
					}else{
						cout<<"your grade is D";    
					}
               }
               
               runSystem(){
               	
				    setTotalStudent();
					
					for(int i=1; i<=totalStudents; i++){
						
						cout<<"\nEnter Data for Student : " << i;
						setData();
						getData();	
						cout<<""<<endl;
						cout<<""<<endl;
					}
	
	            }
};
 
int main(){
	
	StudGradeSystem sgs;
	sgs.runSystem();
	
	return 0;
}
