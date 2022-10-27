
#include<stdio.h>

int fact(int a)
{
	if(a<=1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
main()
{
	int ans,n;
	
	printf("enter the number which you want factorial:\n");
	scanf("%d",&n);
	
	ans=fact(n);
	
	printf("%d is the factorial of %d",ans,n);
}





