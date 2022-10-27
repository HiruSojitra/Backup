#include<stdio.h>
main()
{
	int choice,type;
	
	printf("press 1 for movie ticket booking\n ");
	printf("press 2 for restaurant booking\n ");
	
	printf("enter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	case1:
		printf("press 1 for gujarati movie\n");
		printf("press 2 for real story movie\n");
				
		printf("enter your choice");
		scanf("%d",&choice);
		
		switch(type)
		{
		   case 1:printf("you select comedy movie\n"); break;
		   case 2:printf("you select real story movie\n"); break;
		   default:printf("you select invalid movie\n");
	    }
		break;
		
	case2:
	      printf("press 1 for love story movie\n");
		  printf("press 2 for suspense movie\n");
		  
		  printf("enter your choice");
		  scanf("%d",&choice);
		  
		  switch(type)
		  
		      case 1 :printf("you select love story movie\n"); break;
		      case 2 :printf("you select suspense movie\n "); break;
		    default:printf("you select invalid movie\n");
	      
	      break;
	      
	case3:
	      printf("press 1 for general restaurant\n");
		  printf("press 2 for vip restaurant\n");
		  
		  printf("enter your choice\n");
		  scanf("%d",&choice);
		  
		  switch(type)
		  {
		  	case 1 :printf("you select general restaurant\n "); break;
		  	case 2 :printf("you select vip restaurant\n"); break;
		  	default:printf("you select invalid restaurant\n");
	      }
		  break;      
	        
	    
				
        }  
        
}
