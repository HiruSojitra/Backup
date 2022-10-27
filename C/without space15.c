#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
       for(j=i;j>=1;j--)            
       {
       	 if(j%2==1)
       	{
		 printf("1");
	    }
	     else
	    {
	     printf("0");	
	    }
       }
	   printf("\n");  
    }
	
   return 0;	

}
