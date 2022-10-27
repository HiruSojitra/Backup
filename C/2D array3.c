#include<stdio.h>
main()
{
	int n,n1,n2,i,j,sum=0,avg;
	
	printf("enter value of row \n");
	scanf("%d",&n1);
	printf("enter value of column\n");
	scanf("%d",&n2);
	
	
	int a[n1][n2];
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("enter value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d",a[i][j]);
			sum+=a[i][j];
		}
		avg=sum/n1+n2;
		printf("average is %d",avg);
    }
    printf("\n");

}
