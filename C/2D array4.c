
#include<stdio.h>
main()
{
	int i,j,n1,n2,sum=0;
	
	printf("enter the value of row ");
	scanf("%d",&n1);
	printf("enter the value of column");
	scanf("%d",&n2);
	
	int a[n1][n2],b[n1][n2],c[n1][n2];
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("enter the elements :a[%d][%d]");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("enter the elements : b[%d][%d]");
			scanf("%d",&b[i][j]);
		}
   }
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	for(i=0;i<n1;i++)
	 {
		for(j=0;j<n2;j++)
		{
			printf("addition of %d",c[i][j]);
		}
	 }	
	}	
	
}


       			    							            	
