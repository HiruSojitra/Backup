#include<stdio.h>
union marks
{
	int roll_no;
	char name[100];
	float chem_marks,maths_marks,phy_marks;
};
void main()
{
	union marks marks[5];
	int i;
	float percentage;
	
	for(i=0;i<5;i++)
	{
		printf("student=%d",i+1);
		
		printf("enter roll_no\n");
		scanf("%d",&marks[i].roll_no);
		
		printf("enter name\n");
		scanf("%s",&marks[i].name);
		
		printf("enter chemistry marks\n");
		scanf("%f",&marks[i].chem_marks);
		
		printf("enter maths marks\n");
		scanf("%f",&marks[i].maths_marks);
		
		printf("enter physics marks\n");
		scanf("%f",&marks[i].phy_marks);
	}
	
	for(i=0;i<5;i++)
	{
		printf("student=%d",i+1);
		float percentage=(marks[i].chem_marks+marks[i].maths_marks+marks[i].phy_marks);
		
		printf("percentage=%f",percentage);
	}
}


