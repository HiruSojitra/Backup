#include<stdio.h>
main()
{
	int n1,n2,i,j,l=0;
	
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
			l++;
		}
		printf("%d is the length of array",l);
    }

}
