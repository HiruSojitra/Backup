#include<stdio.h>
main()
{
	int i;
	char s[100];

	printf("enter the string\n");
	
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
	printf(" the given string in lowercase=%s",s);
	
}
