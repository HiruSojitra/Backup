#include<stdio.h>
main()
{
	int i,j,n1,n2,a[i][j],b[i][j],c[i][j];
	
	printf("enter size of a");
	scanf("%d",&n1);
	
	  for(i=0;i<n1;i++)
	  {
	  	scanf("%d",&a[i][j]);
	  }
	
	printf("enter size of b");
	scanf("%d",&n2); 
	
    for(i=0;i<n2;i++);
	 {
	   	scanf("%d",&b[i][j]);
	   	
	    for(i=0;i<n1;i++)
		{
			c[i][j]=a[i][j];
		}
		for(i=0,j=n1;i<n2,j<n1+n2;i++,j++)
		{
			c[i][j]=b[i][j];
		}
		
		printf("after merging\n");
		for(i=0;i<n1+n2;i++)
		{
			printf("%d",c[i][j]);
		}
		
     }
		 
}
		 
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	
	
	
	
