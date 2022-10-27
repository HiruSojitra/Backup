#include<stdio.h>
main()
{
	char i,j,k;
	
	for(i='a';i<='e';i++)
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
