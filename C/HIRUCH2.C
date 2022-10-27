#include<stdio.h>
#include<conio.h>
main()
{
   int a ,b;
   int sum,sub,mult,mod,div;
   clrscr();

   printf("enter two nuber");

   scanf("%d%d",&a,&b);
   sum = a+b;
   sub = a-b;
   mult= a*b;
   mod = a%b;
   div = a/b;

   printf("sum =%d\n",sum);
   printf("sub =%d\n",sub);
   printf("mult=%d\n",mult);
   printf("mod =%d\n",mod);
   printf("div =%d\n",div);

   getch();
}