 #include<stdio.h>
#include<string.h>
main()
{
	int i,n;
	char a[100];
	
	printf("enter the string to get reversed\n");
	gets(a);
	
	n=strlen(a);
	
	printf(" reversed string\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
