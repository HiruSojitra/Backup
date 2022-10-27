#include<stdio.h>
#include<conio.h>
main()
{
	float unit,bill,amt,surcharge,totalamt ;
	clrscr();
	printf("enter total unit");
	scanf("%f",&unit);

	if(unit<=50)
	 {
		amt=unit*0.50;
	 }
	else if(unit<=150)
	 {
		amt=25+((unit-50)*0.75);
	 }
       else if(unit<=250)
	 {
		amt=100+((unit-150)*1.20);
	 }
	else
	 {
		amt=220+((unit-250)*1.50);
	 }

	surcharge=amt*0.20;
	totalamt=(amt+surcharge);
	{
	printf("bill=%.2f",totalamt);
	}

  getch();

}
