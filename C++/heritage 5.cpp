#include <iostream>
using namespace std;
class Number
{
     public:
	 	
	    int num;
        void getNumber()
        {
            cout << "Enter number: ";
            cin  >>this-> num;
        }
    
};
 
class Square:public Number
{
    public:
	  
	  void getSquare()
    {
        square=num*num;
        cout<<endl<<"square is"<<square<<endl;
    }
};
 
class Cube:public Number
{
        
    public:
    void getCube()
    {
        int num,cube;
        cube=num*num*num;
        cout<<"cube is:"<<cube<<endl;
    }
};
int main()
{
        Square s;
        Cube c;
        
       s.getSquare();
       c.cube();
}

