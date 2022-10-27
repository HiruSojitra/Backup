#include<stdio.h>
#include<conio.h>
 main()
{
     int a,b,c;
     clrscr();
      printf("enter two number a and b");
      scanf("%d%d",&a,&b);

      c=a;
      a=b;
      b=c;
      printf("\na=%d and b=%d",a,b);
      getch();
}
