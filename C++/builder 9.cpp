#include <iostream>
using namespace std;
class city
{
	   private:
	   	      int id;
	   	      char name[100];
	   
       public:
  //Constructor
           city()
		   {
              cout<<"object is created"<<endl;
           }
  //Destructor
  ~city()
  {
    cout<<"object is deleted"<<endl;
   }
   //Member function
   void getData()
   {
     cout<<"city"<<endl;
   }
};
int main()
{
   //Object created
        city c1;       ;
   //Member function called
   c1.getData();
   return 0;
}
