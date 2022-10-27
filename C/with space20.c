#include<stdio.h>
main()
{
	char i,k,j;
	
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
		   printf(" ");	
		}
       for(j=1;j<=i;j++)
         if(j%2==0)
		 {
		    printf("0"); 	
		 }              
		 else
		 {
		    printf("1");	
		 }                                       
       	printf("\n");
		    
	}
	
   return 0;	
}
