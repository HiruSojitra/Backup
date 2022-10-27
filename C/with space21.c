#include<stdio.h>
main()
{
	char i,k,j;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
		   printf(" ");	
		}
       for(j=5;j>=i;j--)
         if(i%2==0)
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
