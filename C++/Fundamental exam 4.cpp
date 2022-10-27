#include<iostream>
using namespace std;
int main()
{
      char ch;
      
      cout << "Enter any character : ";
      cin >> ch;
      
      if(ch == 'a' || ch == 'e' || ch == 'i' || ch=='o' || ch =='u') 
      {
	      cout<<" given caracter is vowel:";
      }
      
      else if(ch == 'A' || ch == 'E' || ch =='I' || ch=='O' || ch == 'U')
      {
          cout<<"given character is vowel:";
	  }
      else
      {
           cout << "Given character is consonant";
      }
 return 0;
}
