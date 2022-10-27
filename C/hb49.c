#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("enter the value ");
	scanf("%d",&n);
	
	for( i=1;i<=10;i++)
	{
  
      printf("%d*%d=%d\n",n,i,n*i);
    }
	
  return 0;
	
}
