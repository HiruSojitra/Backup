#include <stdio.h>
 
int main()
{
	int a,b,c,*p1,*p2;
	
	printf("enter a and b value\n");
	scanf("%d %d",&a,&b);
	
	p1=&a;
	p2=&b;
	
	c=*p1;
	*p1=*p2;
	*p2=c;
	
	printf("after swapping a=%d\ b=%d\n",a,b);
 } 
