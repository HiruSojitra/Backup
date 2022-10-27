#include<stdio.h>
main()
{
	int i,n;
	int min,max1,max2;
	int a[i];
	
	printf("enter size");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	   max1=max2=min;
	   for(i=0;i<n;i++)
	   {
	   	if(a[i]>max1)
	   	{
	   	    max2=max1;
	   	    max1=a[i];
	   	}
	   	else if(a[i]>max2 && a[i]<max1)
	   	{
	   		max2=a[i];
	   		
		}
		printf("first largest number=%d\n",max1);
		printf("second largest number=%d\n",max2);
		
	   	
	   }
}
