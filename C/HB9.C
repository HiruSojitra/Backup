#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	if (n>0)
	{
		printf("number is positive");
	}
	       
	   else if(n==0)
	{
		printf("number is 0");
    }
    
    else if(n<0);
    {
    	printf("number is negative");
	}
		getch();
}
