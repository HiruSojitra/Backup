#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("enter the string\n");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A' &&s[i]<='Z')
		
		s[i]=s[i]+32;                
	}
	printf("%s",s);
	
}
