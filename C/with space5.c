#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
	    for(k=5;k>i;k--)
		 {
			printf(" ");
         }
		for(j=i;j>=1;j--)
	     {
			printf("%d",i);
	     }
	  printf("\n");	
	}
 return 0;	
}

