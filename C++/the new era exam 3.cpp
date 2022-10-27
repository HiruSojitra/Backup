#include<iostream>
using namespace std;
class time 
{
   public:
   	
   int second;
 
  public:
   
  void readdata() 
  {
     cout << "enter second: ";
     cin >> second;
  }

};
int main()
{
     int hh,mm,ss,temp;
     time t;
     t.readdata();
     hh=t.second/3600;
     temp=t.second%3600;
     mm=temp/60;
     ss=temp%60;
     
   cout << hh << ":" << mm << ":" << ss;

}


