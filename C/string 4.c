#include<stdio.h>
main()
{
	int i;
	char s[100];

	printf("enter the string\n");
	
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf(" the given string in uppercase=%s",s);
	
}
