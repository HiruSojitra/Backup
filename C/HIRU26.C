#include<stdio.h>
#include<conio.h>

main()
{
    float p,r,t,si;
    clrscr();
    printf("enter value of principle");
    scanf("%f",&p);

    printf("enter value of rate");
    scanf("%f",&r);

    printf("enter value of time");
    scanf("%d",&t);

    si=p*r*t/100;
    printf("simple intrest=%f",si);
    getch();
}

