#include <iostream>
using namespace std;
 
class MarginTV {
	
		float heightOfTVInInch;
		float widthOfTVInInch;
		float requiredArea;
		
    	public:
    		
	    		setData(){
	    			cout<<"Enter the height of TV in inch: ";
					cin>>heightOfTVInInch;
					
					cout<<"Enter the width of TV in inch: ";
					cin>>widthOfTVInInch;
					
	            }
	            
	            getData(){
						heightOfTVInInch  = heightOfTVInInch + 20;	
						widthOfTVInInch   = widthOfTVInInch  + 20;
						
						requiredArea =  widthOfTVInInch * heightOfTVInInch;
						
						cout<<"Required area  : " << requiredArea <<" inches";
				}
};
 
int main(){
	
	MarginTV mt;
	mt.setData();
	mt.getData();
	
	return 0;
}
