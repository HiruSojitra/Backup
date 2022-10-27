#include<stdio.h>
main()
{
	int i,n;
	
	printf("enter value of array");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter of a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("negative values are\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
		}
	}
}

