#include<stdio.h>
main()
{
	char i,k,j;
	
	for(i='e';i>='a';i--)
	{
		for(k='e';k>i;k--)
		{
		   printf(" ");	
		}
       for(j='a';j<=i;j++)
        {                                                     
       	 printf("%c",j);
        }
	   
	   printf("\n");  
	}
	
   return 0;	
}
