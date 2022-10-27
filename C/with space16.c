#include<stdio.h>
main()
{
	char i,k,j;
	
	for(i='a';i<='e';i++)
	{
		for(k='a';k<i;k++)
		{
		   printf(" ");	
		}
       for(j=i;j<='e';j++)
        {                                                     
       	 printf("%c",j);
        }
	   
	   printf("\n");  
	}
	
   return 0;	
}
