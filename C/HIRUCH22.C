#include<stdio.h>
#include<conio.h>
main()
{
   int l,h,area;
   clrscr();

   printf("enter the length of rectangle");
   scanf("%d",&l);

   printf("enter the height of rectangle");
   scannf("%d",&h);

   area = l*h;
   printf("area of rectangle:%d", area);

   getch();
}

