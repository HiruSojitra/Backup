#include<stdio.h>
#include<conio.h>
main()
{
     int age;
     clrscr();
     printf("enter the age");
     scanf("%d",&age);
     if(age>18)
    {
     printf("you can vote");
    }
     else if(age<18)
    {
     printf("you can't vote");
    }
     else if(age==18)
    {
     printf("you can vote");
    }
    getch();
}

