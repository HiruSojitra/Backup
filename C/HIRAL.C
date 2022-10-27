#include<stdio.h>
#include<conio.h>
main()
{
  int bs;
  float hra,da,ta,gs;
  clrscr();
  printf("enter bs");
  scanf("%d",&bs);
  hra=bs*0.10;
  da=bs*0.05;
  ta=bs*0.08;
  gs=bs+hra+da+ta;
  printf("gs=%f",gs);
  getch();
 }

