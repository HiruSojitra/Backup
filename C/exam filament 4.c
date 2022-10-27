#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j,k;
	
	printf("enter string\n");
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[j]==a[i])
			{
				for(k=j;a[k]!='\0';k++)
				{
				   a[k]=a[k+1];
				}
			}
		}                                                         
		
	}
	
	printf("removing all repeted string=%s\n",a);
}
