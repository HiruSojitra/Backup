#include<stdio.h>

   main()
   {
   
     FILE *f;
     char data[1000];
    f = fopen("demo.txt","r");
    if(f==NULL)
 {
 	printf("unable to open file.\n");
 	printf("please check whether file exists and your read privilege.\n");

 }
 else
 {
 	printf("file opened successfully. Reading file contents character by charecter.\n\n");	
 }
 
 while(fgets(data,3,f)!=NULL)
 {
 	printf("%s",data);
 }
  
    fclose(f);
}

