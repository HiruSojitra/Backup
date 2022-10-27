#include <iostream>
using namespace std;

class Base {
	
   public:
    virtual void display() {
    	
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
	
   public:
    void display() {
    	
        cout << "Derived Function" << endl;
    }
};

int main() {
	
    Derived d1;

    
    Base* b1 = &d1;

    
    b1->display();

    return 0;
}


