#include<stdio.h>
main()
{
	int i,j,n1,n2,sum=0;
	
	int a[3][3];
	printf("enter value of row \n");
	scanf("%d ",&n1);
	printf("enter value of column\n");
	scanf("%d",&n2);
	
	int a[n1][n2];
	
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("enter value a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			sum[j]+=a[i][j];
		}
    }
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
	
			{
			
			     printf("%d",a[i][j]);	
			   
			}
	
			printf(" the sum  of row =%d\n",sum[i]);
	}
	
	return 0;
}
