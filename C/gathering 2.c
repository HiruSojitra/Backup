#include<stdio.h>
 
 int sumofarray(int a[],int n)
 {
 	int i,sum=0;
 	
 	for(i=0;i<n;i++)
 	{
 		sum+=a[i];
	 }
	 return sum;
 }
 int main()
 {
 	int a[100],i,n,sum;
 	
 	printf("enter size of array\n");
 	scanf("%d",&n);
 	
 	printf("enter elements in array\n");
 	
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	}
	
	sum= sumofarray(a,n);
	
	printf("sum of array is=%d",sum);
 }
