
#include<stdio.h>
struct Distance
{
	int feet;
	int inch;
} d1,d2,sum;

void main()
{
	printf("enter 1st distance:\n");
	printf("enter feet");
	scanf("%d",&d1.feet);
	printf("enter inch");
	scanf("%d",&d1.inch);
	
	printf("enter 2nd distance:\n");
	printf("enter feet");
	scanf("%d",&d2.feet);
	printf("enter inch");
	scanf("%d",&d2.inch);
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d2.feet+d2.inch;
	
	if(sum.inch>12.0)
	{
		sum.inch=sum.inch-12.0;
		sum.feet++;
	}
	
	printf("sum of distance=%d %d",sum.feet,sum.inch);
}
	


