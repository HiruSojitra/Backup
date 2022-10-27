#include<stdio.h>
#include<conio.h>
main()
{
    float celsius,fahrenheit;
    clrscr();
    printf("enter temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("%2f celcius=%.2f fahrenheit",celsius,fahrenheit);
    getch();
}