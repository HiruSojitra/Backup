#include<stdio.h>
main()
{
	int i,j;
	char k='a';
	
	for(i=1;i<=5;i++)
	{
       for(j=1;j<=i;j++)
       {
       	 printf("%c",k);
       	 k++;
	   }
	   
	   printf("\n");  
	}
	
   return 0;	
}
