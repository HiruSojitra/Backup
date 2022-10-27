#include<stdio.h>
main()
{
	int n,i,l=0;
	
	printf("enter how many elements you want:-\n");
	scanf("%d",&n);
	int a[n];
	
	
   	printf("enter all value you need:-\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("this is all values:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[l]); 
		l++;
    }
     printf("%d is length of array",l);
	

}
	
