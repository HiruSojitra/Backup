#include<stdio.h>
main()
{
      int n,i;
      
      printf("enter value array");
      scanf("%d",&n);
      
      int a[n],b[n],c[n];
      
      for(i=0;i<n;i++)
      {
      	printf("a[%d]",i);
      	scanf("%d",&a[i]);
	  }
	  for(i=0;i<n;i++)
	  {
	  	printf("b[%d]",i);
	  	scanf("%d",&b[i]);
	  }
	  for(i=0;i<n;i++)
	  {
	  	c[i]=a[i]+b[i];
	  }
	  for(i=0;i<n;i++)
	  {
	  	printf("sum of a and b=%d",c[i]);
	  }
	  printf("\n");
	  
}
