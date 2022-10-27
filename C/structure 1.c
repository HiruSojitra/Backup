#include<stdio.h>
#include<string.h>

struct car
{
	int id;
    char company_name[100];
	char model[100];
	char colour[100];
}c[100];

void main()
{
	int n,i;
	
	printf("enter how many car\n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{ 
		printf("enter id\n");
		scanf("%d",&c[i].id);
		printf("enter company_name\n");
		scanf("%s",&c[i].company_name);
		printf("enter model\n");
		scanf("%s",&c[i].model);
		printf("enter colour\n");
		scanf("%s",&c[i].colour);
	}
	
	for(i=0;i<n;i++)
	{
	
	   printf("id=%d,company_name=%S, model=%s,colour=%S\n",c[i].id,c[i].company_name,c[i].model,c[i].colour);
    }
    return 0;
}


	

