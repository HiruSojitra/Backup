#include<stdio.h>

 int  findlength(char a[])
 {
 	int len=0;
 	
 	while(a[len]!='\0')
 	len++;
 	return(len);
 }
 
 int main()
 {
 	char a[100];
 	int length;
 	
 	printf("enter the string\n");
 	gets(a);
 	
 	length=findlength(a);
 	
 	printf("length of the string is %d",length);
 	
 	return 0;
 }
