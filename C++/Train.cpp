#include<iostream>
#include<string.h>
using namespace std;

class Train{
	public:
		int trainNumber = 0;
		string trainName;
		string source;
		string destination;
		int trainTime = 0;
		
		
		void setTrainNumber(int trainNumber)
        {
            trainNumber = trainNumber;
        }
          
        int getTrainNumber()
        {
            return trainNumber;
        }
        
        
        
        void setTrainName(string trainName){
            trainName = trainName;
        }
          
        string getTrainName(){
            return trainName;
        }
        
	
	public:
		void setdata(){
			cout << " \n\n  Enter Train No : ";
			cin >> trainNumber;
			
			cout << " Enter Train Name  : ";
			cin >> trainName;
			
			cout << " Enter Source  : ";
			cin >> source;
			
			cout << " Enter Target  : ";
			cin >> destination;
			
			cout << " Enter Time : ";
			cin >> trainTime;
		}	
		
		printData(){
		
			cout << "\n\nTrain Number : " << trainNumber;
			cout << "\n Train Name : " << trainName;
			cout << "\n Train Source: " << source;
			cout << "\n Train Destination : " << destination;
			cout << "\n Train Time : " << trainTime;
		}
};

int main() {
		
		Train s[3];
		
		for (int i=0; i<3; i++) {
			s[i].setdata();
		}
		
		string trainName;
		
		cout << "\nEnter Train Name for Search:";
		cin  >> trainName;
		
		for (int i=0; i<3; i++) {
			if(s[i].getTrainName() == trainName){
				s[i].printData();
				break;
			}
		}
		
//		s[searchTrain].getdata();
//		for (int i=0; i<3; i++) {
//			
//		}

		
		
		
//		for (int i=0; i<3; i++) {
//			
//			for (int j=0; j<3-i; j++) {
//				
//				if (s[j].no > s[j+1].no){
//				
//				SuperMarket	temp = s[j];
//					s[j] = s[j+1];
//					s[j+1] = temp; 
//				}
//			}
//		}
//		
//		for (int i=0; i<3; i++) {
//			s[i].getdata();
//		}
	
	return 0;
}


