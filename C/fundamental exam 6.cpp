#include<iostream>
using namespace std;
int main()
{
      int a[100], i;
      
    cout << "Enter 5 elements of an Array : " << endl;
    
	for(i = 0 ; i < 5 ; i++)
    {
      cin >> a[i];
    }
    for(i = 0 ; i < 5 ; i++)
    {
      a[i] = a[i] * a[i] * a[i];
    }
    
    cout << "Cube of array is : " << endl;
    
    for(i = 0 ; i < 5 ; i++)
    {
       cout << a[i] << endl;
    }
return 0;
}
