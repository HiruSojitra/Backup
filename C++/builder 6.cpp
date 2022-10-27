#include<iostream>
#include<string.h>
using namespace std;
class city
{
	   private:
	    	int id;
		    char name[100];

       public:
		     city()
		     {
		     	this->id =1;
		     	strcpy( this->name, "surat" );
			 }
	   
	   void getDAta()  
	   {
	   	 cout<<"ID" << this->id
	   	     <<",Name" << this-> name << endl;
		
	   }		 
};
int main()
{
	city c1,c2;
	
	c1.getDAta();
	c2.getDAta();
}
