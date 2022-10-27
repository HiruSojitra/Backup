#include<stdio.h>
main()
{
	int i,j,n1,n2,sum=0;
	
	printf("enter how many rows you need");
	scanf("%d",&n1);
	printf("enter how many column you need");
	scanf("%d",&n2);
	
	int a[n1][n2];
	printf("enter the elements");
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter boundary matrix");
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(i==0 ||j==0 ||i==n1-1 ||j==n1-1)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("sum of boundary is %d",sum);
}
