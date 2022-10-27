#include<stdio.h>
 int white(int *n)
 {
 	return n;
 }
 int main()
 {
 	int a=5,*ans;
 	int *p1;
 	p1=&a;
 	
 	ans=&a;
 	
 	printf("ans is %d",*ans);
 	return 0;
 }
