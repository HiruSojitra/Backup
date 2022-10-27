#include<iostream>
using namespace std;
int main()
{
          int i,a[100];
          
         cout << "Leap years between 2020 to 3030 \n " ;
         
         
         for(i = 2020; i <= 3030 ; i++)
         {
             if(i % 4 == 0)
              
               cout << i<< "\t";
               a[i]=i;
               cout<<a[i];
         }
       return 0;
}



