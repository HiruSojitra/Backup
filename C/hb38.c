#include<stdio.h>
main()
{
	int i=1, n ,fact=1;
	
	printf("enter value ");
	scanf("%d",&n);
	
	do
	{
		fact=fact*i;
		i--;
	}
	
	while(i>=1);
	
		printf("ans is %d",fact);
	
return 0;	

}
 
