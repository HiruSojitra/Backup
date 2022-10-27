#include<iostream>
using namespace std;

class Solution{
      
      public:

       int totalDays, days, weeks, months, years;
       
       void setData(){
	   
       cout<<"Enter totalDaysal Number of Days: ";
       cin>>totalDays;
       
      }
      
      void Display(){
	  
      
         years = totalDays/365;
         months = (totalDays%365)/30;
         weeks = ((totalDays%365)%30)/7;
         days = ((totalDays%365)%30)%7;

         cout<<endl<<totalDays<<" Days = ";
   
        if(years>1)
          cout<<years<<" Years "<<endl;
          
        else
          {
              if(years==1)
              cout<<years<<" Year, "<<endl;
          }
   
        if(months>1)
            cout<<months<<" Months, "<<endl;
        else
        {
           if(months==1)
           cout<<months<<" Month, "<<endl;
        }
       if(weeks>1)
              cout<<weeks<<" Weeks "<<endl;
       else
        {
            if(weeks==1)
            cout<<weeks<<" Week"<<endl;
        }  
      if(days>1)
          cout<<days<<" Days."<<endl;
      else
      {
        if(days==1)
         cout<<days<<" Day."<<endl;
       }
   
   }
};
int main(){
	
	Solution s;
	
	s.setData();
	s.Display();
	
	return 0;
}

