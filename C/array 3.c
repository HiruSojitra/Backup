#include<stdio.h>
main()
{
	int n,i,avg,sum=0;
	
	printf("enter size:-\n");
	scanf("%d",&n);
	int a[n];
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	    sum+=a[i];    
    }
     avg=sum/ n;
     printf("average: %d\n",avg,sum);
	

}
	
