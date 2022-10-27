#include<stdio.h>
main()
{
	int i,j,sum=0;
	int a[3][3];
	
	printf("enter the elements"); //5,2,6,7,9,3,4,1,8//
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		 {
				scanf("%d",&a[i][j]);
		 }
    }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		printf("sum of diagonal elements is %d",sum);	
		}
	}		
	
}


	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	
	
	
	
