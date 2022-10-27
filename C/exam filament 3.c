#include<stdio.h>

main()
{
   char a[50];
   int i=0,j,ch;
   printf("enter any statement");
   gets(a);
   
   while(a[i]!='\0')
   {
   
   ch=0;
   
   if(a[i]=='')
   {
   	j=i;
   	while(a[j-1]!='\0')
	   {
   		a[j]=a[j+1];
   		j++;
	   }
	   ch=1;
   }
   if(ch==0)
   i++;
   }
   printf("\n sentence without spaces:%s",a);
   getch();
   
}
