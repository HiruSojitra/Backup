
#include<iostream>
using namespace std;
class student 
{
   public:
   	
   int id;
   
   private:
   
   int fees;
  
  public :
void readdata()
{
    cout << "enter id: ";
    cin >> id;
    cout << "enter fees: ";
    cin >> fees;
}
void print() 
{
     cout << "fees:" << fees << endl;
}

};
int main()
{
   student s;
   s.readdata();
   
   cout << "id:" << s.id << endl;
   s.print();
}


