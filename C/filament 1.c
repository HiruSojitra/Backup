#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i=0,j,count[26]={0};
	
	printf("enter a string\n");
	gets(a);
	
    while(a[i]!='\0')
	{
		if(a[i]>='a' && a[i]<='z')
		{
			j=a[i]-'a';
			count[j]++;
		}
		 i++;
		
	}
	for(i=0;i<26;i++)
	{
		printf("%c occures %d times in the string\n",i+'a',count[i]);
	}	
 
}
