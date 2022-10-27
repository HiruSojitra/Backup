#include <iostream>
using namespace std;
 
class VowelCons {
	
    	public:
    		
              char character;
              bool isLowercaseVowel, isUppercaseVowel;
              
              setDAta(){
				   cout << "Enter an alphabet: ";
    			   cin >> character;	   
             }
             
              getData(){
   				    
					isLowercaseVowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');

				    isUppercaseVowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');
				
				    if (!isalpha(character))
				        cout << character << "Error! Non-alphabetic character.";
				    else if (isLowercaseVowel || isUppercaseVowel)
				        cout << character << " is a vowel.";
				    else
				        cout << character << " is a consonant.";

               }
};
 
int main(){
	
	VowelCons vc;
	
	vc.setDAta();
	vc.getData();
	
	return 0;
}

