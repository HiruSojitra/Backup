#include <stdio.h>
#include <string.h>

int main()
{
   FILE *fp;
   char str[80];
 
   fp = fopen("demo.txt", "a");
 
   printf("Enter your message:");
   gets(str);
   
   fputs("\n",fp);
   fprintf(fp, "%s",str);
 
   printf("Your message is appended in demo.txt file.");
   fclose(fp);
   return 0;
}

