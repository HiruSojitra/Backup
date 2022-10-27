#include <iostream>
using namespace std;
 
class Table{
	
    	public:
    		
				int n;
				
	          	setDAta(){
				    cout << "Enter a positive integer: ";
				    cin >> n;
	            }
             
              	getData(){
					    for (int i = 1; i <= 10; ++i) {
					        cout << n << " * " << i << " = " << n * i << endl;
					    }
               }
};
 
int main(){
	
	Table table;
	
	table.setDAta();
	table.getData();
	
	return 0;
}

