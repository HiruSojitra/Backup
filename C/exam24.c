#include<stdio.h>
#include<conio.h>

main()
{
   int i,j,a,b;

    for(i=5;i>=1;i--)
    {
       for(j=1;j<i;j++)
        {
         printf(" ");
        }
       for(a=5;a>=i;a--)
        {
         printf("%d",a);
        }
       for(b=i+1;b<=5;b++)
        {
           printf("%d",b);
        }
       printf("\n");
    }
return 0;
}
