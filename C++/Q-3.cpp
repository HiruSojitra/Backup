#include <iostream>
using namespace std;

class Fifth{
     
	 public:
	     
        int divisor, dividend, quotient, remainder;
        float ans,an;
       
       void setData(){
	   
          cout << "Enter dividend: ";
          cin >> dividend;

          cout << "Enter divisor: ";
          cin >> divisor;
      }
      void getData(){
	  
        quotient = dividend / divisor;
        remainder = dividend % divisor;
        ans=quotient;
        an=remainder;
        cout<<"=> Quotient :"<<ans<<endl<<"=> Remainder:"<<endl;
      }
};
int main(){
       
       Fifth f;
       f.setData();
       f.getData();
       
       return 0;
}
