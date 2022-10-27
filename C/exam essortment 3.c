#include<stdio.h>
main()
{
	int i,j,n,count;
	int a[100],freq[100];
	
	printf("enter size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	printf("frequency of all elements of array\n");
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d number %d times\n",a[i],freq[i]);
		}
	}
}
