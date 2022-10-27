#include <iostream>
using namespace std;

class Calculate{
	     
	     public:
	     	
	     	 int Average;
	     	
	     	void setData(){
			 
	     int num_1;
         cout << "Enter num_1 : ";
         cin >> num_1;

         int num_2;
         cout << "Enter num_2 : ";
         cin >> num_2;

         int num_3;
         cout << "Enter num_3 : ";
         cin >> num_3;
   
        Average = (num_1 + num_2 + num_3) / 3;
       }
        
        void getData(){
		
           cout << "Average is : " << Average << endl;
       }
};
int main(){
	
	Calculate c;
	c.setData();
	c.getData();
	return 0;
}

