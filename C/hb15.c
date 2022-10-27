#include<stdio.h>
#include<conio.h>
main()
{
	    char ch;
        printf("enter any character");
        scanf("%c",&ch);
        
        if((ch>='a' && ch<='z'))||((ch>='A' && ch<='Z'))
		 {
		 	printf("%c is alphbet.",ch);
	     }
		 
		else if(ch>=0 && ch<=9)
		{
			printf("%c is digit.",ch);
		}
		    
		else
		{
			printf("%c is special character.",ch);
	    }	
		
    getch();		   
		     
}
	
	
	
}
