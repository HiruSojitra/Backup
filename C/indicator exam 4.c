#include <stdio.h>
main()
{
    char a[100],*p;
    int i=0;
    
    printf("enter string\n");
    gets(a);
    
    p=&a;
    
    while(*p!='\0')
    {
    	i++;
    	p++;
	}
	printf("length of string=%d\n",i);
}
