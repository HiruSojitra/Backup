#include<stdio.h>
#include<conio.h>

main()
{
   int i,j,a,b;


    for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("%d",j);
      }
      for(a=i*2;a<5*2;a++)
      {
        printf(" ");
      }
      for(b=i;b>=1;b--)
      {
        printf("%d",b);
      }
        printf("\n");
    }

return 0;
}
