#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	
	printf("press 1 for monday");
	printf("press 2 for tuesday");
	printf("press 3 for wednesday");
	printf("press 4 for thursday");
	printf("press 5 for friday");
	printf("press 6 for saturday");
	printf("press 7 for sunday");
	
	printf("enter a day");
	scanf("%d",&day);
	
	switch(day)
          
		  case1:
		       	printf("monday");
		       	break;
		  case2:
		        printf("tuesday");
				break;
		  case3:
		        printf("wednesday");
				break;
		  case4:
		        printf("thursday");
				break;
		   case5:
		        printf("friday");
				break;
		   case6:
		        printf("saturday");
				break;
			case7:
			    printf("sunday");
				brak;
			default;
			    printf("enter invalid day");
				break;
				
	getch();														   	
	
}
