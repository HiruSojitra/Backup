#include<iostream>
#include<string.h>
using namespace std;
class city
{
	   private:
	    	int id;
		    char name[100];

       public:
		     city(int id ,char name[])
		     {
		     	this->id =id;
		     	strcpy( this->name, name);
			 }
			 city(city &n)
			 {
			 	this->id = n.id;
			 	strcpy(this->name,n.name);
			 }
	   
	   void getData()  
	   {
	   	 cout<<"ID" << this->id
	   	     <<",Name" << this-> name << endl;
		
	   }		 
};
int main()
{
	city jay(1,"Mumbai");
	city hiru(2,"Surat");
	city vishal(jay);
	city aksh(hiru);
	
	jay.getData();
	hiru.getData();
	vishal.getData();
	aksh.getData();
	
	return 0;
}
