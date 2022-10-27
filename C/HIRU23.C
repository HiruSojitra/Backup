#include<stdio.h>
#include<conio.h>
main()
{
   float b,h,area;
   clrscr();
   printf("enter base of area");
   scanf("%f",&b);
   printf("enter height of area");
   scanf("%f",&h);
   area=b*h*(0.5);
   printf("area of triangle=%f",area);
   getch();

}

