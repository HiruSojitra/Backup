#include<iostream>
using namespace std;
int main()
{
       char ch;
       
       cout << "Enter any number : ";
       cin >> ch; 
       
    if(ch >= '0' && ch <= '9')
     {
        cout << "Input is numeric";
     }
    else
     {
        cout << "Input is not numeric";
     }
return 0;
}
