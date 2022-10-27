#include<iostream>
#include<string.h>
using namespace std;
class city
{
	   private:
	    	int id;
		    char name[100];

       public:
		     city(int id,char name[])
		     {
		     	this->id =id;
		     	strcpy( this->name, name);
			 }
	   
	   void getDAta()  
	   {
	   	 cout<<"ID" << this->id
	   	     <<",Name" << this-> name << endl;
		
	   }		 
};
int main()
{
	city c1(1,"Mumbai");
	city c2(2,"Surat");
	
	c1.getDAta();
	c2.getDAta();
	

}
