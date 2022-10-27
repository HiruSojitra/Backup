  #include<iostream>
  using namespace std;
  int main(){
  	 int a;
  	 
  	 cout<<"Enter value of a..";    cin>>a;

  	 
  	 try{
  	 	if(a>18){
  	 		throw 19;
		   }
		else{
	        
			cout<<"you are not able to voting.."<<endl;
		}  
	   }

catch(int n){
	cout<<"you can voting..."<<endl;
}
catch(double n){
	cout<<"age is less than 18..."<<endl;
}
catch(...){
	cout<<"General Exception block..."<<endl;
}
return 0;
}

