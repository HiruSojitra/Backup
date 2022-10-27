#include<stdio.h>
#include<conio.h>

main()
{
   int i,j,k,a,b,c;

  for(i=1;i<=5;i++)
   {
     for(k=5;k>i;k--)
     {
      printf(" ");
     }     
     for(j=1;j<=i;j++)
     {
       printf("%d",j);
     }
    printf("\n");
   }

  for(a=2;a<=5;a++)
  {
     for(b=1;b<a;b++)
      {
        printf(" ");
      }
      
	 for(c=a;c<=5;c++)
      { 
        printf("%d",c);
      }
     printf("\n");
  }
  
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

