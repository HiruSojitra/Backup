#include<stdio.h>
#include<conio.h>

main()
{
  int i,j,n;

    for(i=1;i<=5;i++)
    {
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(n=i;n<=5;n++)
		{
			printf("%d",n);
		}
    	printf("\n");
	}
return 0;
}

