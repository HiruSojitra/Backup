#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d,e,f,g,h;

    for(a=5;a>=1;a--)
    {
      for(b=1;b<=a;b++)
       {
        printf("%d",b);
       }
      for(c=a*2;c<5*2;c++)
       {
        printf(" ");
       } 
      for(d=a;d>=1;d--)
       {
         printf("%d",d);
       }
        printf("\n");
    }
	 
    for(e=2;e<=5;e++)
    {
       for(f=1;f<=e;f++)
        {
          printf("%d",f);
        }
       for(g=e*2;g<5*2;g++)
        {
         printf(" ");
        }
       for(h=e;h>=1;h--) 
        {
         printf("%d",h);
        }
       printf("\n");
    }
 return 0;
}
