#include <iostream>
using namespace std;
 
class Time{
	
      int t,h,m,s;
      
      public:
      	void setData(){
		  
		  cout << "Enter a time in seconds: ";
          cin >> t;
        
		  h = t/3600;
          t = t%3600;
          m = t/60;
          t = t%60;
          s=t;
        }
        void getData(){
		
            cout<<"Time is HH:MM:SS is"<<h<<":"<<m<<":"<<s<<endl;
        }
};
int main(){
	 
	 Time t;
	 t.setData();
	 t.getData();
	 
	 return 0;
}
