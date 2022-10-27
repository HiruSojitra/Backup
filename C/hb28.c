#include<stdio.h>
main()
{
   int n,fact=1;
   
   printf("enter value");
   scanf("%d",&n);
   
   while(n>=1)
   {
   	 fact= fact*n;
   	 n--;
   }
     printf("ans is %d",fact);
     
  return 0;
  
}
