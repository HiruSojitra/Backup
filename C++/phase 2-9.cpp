#include<iostream>
using namespace std;

int main(){


    
     float bmi,w,h;
	  
     cout<<"enter weight in pounds";
     cin>>w;
     
     cout<<"enter height in inches";
     cin>>h;
     
     bmi=(w*703)/(h*h);
     cout<<"Your BMI is : "<<bmi<<endl;
     
     if(bmi>25)
        cout<<"Overweight";
     
     else if(bmi<25 && bmi>18.5)
        cout<<"Optimal";
     else
         cout<<"Underweight";

}
   

