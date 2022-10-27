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
			 	this->id=1;
				strcpy(this->name,"surat");  
			 }   
       	     
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
	city c1;
	city c2(1,"Mumbai");
	city c3(c2);

	 c1.getData();
	 c2.getData();
	 c3.getData();
	return 0;
}
