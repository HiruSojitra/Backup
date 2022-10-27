#include<stdio.h>
main()
{
	int n1,n2,a[100],b[100],c[100],i,j;
	
	printf("enter size of a");
	scanf("%d",&n1);
	
	  for(i=0;i<n1;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	
	printf("enter size of b");
	scanf("%d",&n2); 
	
    for(i=0;i<n2;i++);
	 {
	   	scanf("%d",&b[i]);
	   	   
	    for(i=0;i<n1;i++)
		{
			c[i]=a[i];
		}
		for(i=0,j=n1;i<n2,j<n1+n2;i++,j++)
		{
			c[j]=b[i];
		}
		
		printf("after merging\n");
		for(i=0;i<n1+n2;i++)
		{
			printf("%d",c[i]);
		}
		
     }
		 
}
		 
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	
	
	
	
