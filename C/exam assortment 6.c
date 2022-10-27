#include<stdio.h>
main()
{
      int n1 ,n2,i,j;
      
      printf("enter value  of row");
      scanf("%d",&n1);
      printf("enter value of column");
      scanf("%d",&n2);
      
      int a[n1][n2],transpose[10][10];
      
      for(i=0;i<n1;i++);
      {
      	for(j=0;j<n2;j++)
      	{
      		printf("a[%d][%d]",i,j);
      		scanf("%d",&a[i][j]);		 
		}
	  }
	  
	  printf("enter matrix\n");
	  for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	  		printf("%d",a[i][j]);
	  		if(j==2-1)
	  		{
	  			printf("\n");
			}
	    }
	    for(i=0;i<n1;i++)
	    for(j=0;j<n2;j++)
	    
	    transpose[j][i]=a[i][j];
			
      }
      printf("transpose of the matrix");
      
      for(i=0;i<n1;i++)
      for(j=0;j<n2;j++)
      {
      	printf("%d",transpose[i][j]);
      }
      
      if(j==n1-1)
      printf("\n");
		
}
      
      
	  

