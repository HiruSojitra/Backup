#include<stdio.h>
main()
{
	int i;
	char a[100];
     printf("enter a string\n");
	 gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		  a[i]=a[i]+32;
	
	    else if(a[i]>='a'&& a[i]<='z')
	      a[i]=a[i]-32;
    }
    printf("string is toggle =%s",a);
	
}
