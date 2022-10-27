  
#include<stdio.h>
main()
{
            	FILE *fp;
            	
            	char data [100];
            	fp = fopen("hiru.txt","r");
            	
            	if( fp != NULL)
            	{
                            	printf("File is open");
                            	printf("\n file d is :\n");
                            	
                            	while(fgets(data,4,fp)!=NULL)
                            	{
                                            	printf("%s",data);
                            	}
            	}
            	else
            	{
                            	printf("file is not open");
            	}
            	fclose(fp);
}

