#include<stdio.h>

void mul(int *a ,int *b,char *c)
{
	*a=10;
	*b=20;
	*c='M';
}

int main()
{
	int a,b;
	char c;
	
	mul(&a,&b,&c);
	
	printf("a=%d, b=%d, c=%c\n",a,b,c);
}
