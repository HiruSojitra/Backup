#include<iostream>
using namespace std;

class city
{
    private:
        int id;
        char name[];
    public:
        class()
        {
            cout<<"Object is created............"<<endl<<endl;
        }
        ~test()
        {
            cout<<"Object is deleted.........."<<endl<<endl;
        }
};

int main()
{
    city c1,c2;
    
    c1.getData();
    c2.getData();

    return 0;
}
