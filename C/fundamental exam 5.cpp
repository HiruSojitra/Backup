#include<iostream>
#include<cmath>
using namespace std;
int main()
{
      int a[100], n, i;
      
      cout << "enter of an Array : ";
      cin >> n;
      
    for(i = 0 ; i < n ; i++)
     {
         cin >> a[i];
     }
     
    cout << "Square root of elements are : " << endl;
    
    for(i = 0 ; i < n ; i++)
    {
      cout << sqrt(a[i]) << endl;
    }
return 0;
}
