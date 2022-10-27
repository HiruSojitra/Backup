#include<stdio.h>
main()
{
	int a[100],i,n,*p;
	
	printf("enter size\n");
	scanf("%d",&n);
	
	printf("enter elements\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[n-1];
	
	printf("reverse array is\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d",*p--);
	}
}
