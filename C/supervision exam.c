#include<stdio.h>

main()
{
	FILE *fp1,*fp2;
	char data[1000];
	
	fp1 = fopen("demo.txt","r");
	fp2 = fopen("demo_1.txt","w");
	
	while(fgets(data, 3, fp1) != NULL)
	{
		fputs(data, fp2);
	}
	printf("File comied successfull...\n");
	
	fclose(fp1);
	fclose(fp2);
}

