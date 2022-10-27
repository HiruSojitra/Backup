  #include<iostream>
  using namespace std;
  int main(){
  	 int a,b,c;
  	 a=5;
  	 b=0;
  	 
  	 try{
  	 	if(b==0){
  	 		throw 13;
		   }
		else{
			c=a/b;
			cout<<c<<endl;
		}  
	   }

catch(float n){
	cout<<"Not Possible..."<<endl;
}
catch(double n){
	cout<<"cannot divide by zero..."<<endl;
}
catch(...){
	cout<<"General Exception block..."<<endl;
}
return 0;
}

