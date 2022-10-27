#include<stdio.h>
main()
{
      int i,j,n1,n2,sum=0;
      
      printf("enter the value of row");
      scanf("%d",&n1);
      printf("entr the value of column");
      scanf("%d",&n2);
      
      int a[n1][n2];
      
      for(i=0;i<n1;i++)
      {
      	for(j=0;j<n2;j++)
      	{
      		printf("a[%d][%d]",i,j);
      		scanf("%d",&a[i][j]);
		}
	  }
	  for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	  		printf("%d",a[i][j]);
	    }
	  }
	  for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	  		if(i==j)
	  		{
	  			sum=sum+a[i][j];
			}
		}
	  }
	  printf("sum of diagonal %d",sum);
	  
}
	  
