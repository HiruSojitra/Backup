#include<stdio.h>
#include<conio.h>
main()
{
     int a,b;
     clrscr();
     printf("enter two number");
     scanf("%d%d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;

     printf("%d%d",a,b);
     getch();
}

