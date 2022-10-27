#include<stdio.h>
main()
{
	int i=1,n,fact=1;
	
	printf("enter the value ");
	scanf("%d",&n);
	
	for( i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	    printf("%d",fact);
		
	return 0;
	
}
