#include<iostream>
using namespace std;
int main()
{
          int i;
          
         cout << "Leap years between 2000 to 3000 \n " ;
         
         
         for(i = 2000 ; i <= 3000 ; i++)
         {
             if(i % 4 == 0)
              
               cout << i<< "\t";

         }
       return 0;
}



