#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);	
	do
	{
		if(n%2==0)
		printf("%d",n);
		n--;
	}
	while(n>=1);

return 0;

}
