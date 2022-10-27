#include<stdio.h>
#include<conio.h>
main()
{
	
   	int choice ,type;
	
	 printf("press1 for sandwich");
	 printf("press 2 for burger");
	 printf("press 3 for pizza");
	 printf("press 4 for vadapav");
	
	 printf("enter your choice");
	 scanf("%d",&choice);

switch (choice)
  {
	case1:
		printf("press 1 for olive sandwich.\n");
		printf("press 2 for vegetable sandwitch.\n");
		printf("press 3 for cheese sandwitch.\n ");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf("you order olive sandwitch.\n"); break;
	    	    
	    	case 2: printf("you order vegetable sanwitch.\n"); break;
	    	    
	    	case 3: printf("you order cheese sanwitch.\n"); break;
	    	    
	    	default:  printf("you enter invalid type.\n");
	   
	    }
	    break;
	
	case2:
		printf("press 1 for spicy paneer burger.\n");
		printf("press 2 for aloo tikki burger.\n");
		printf("press 3 for vegetable burger.\n ");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf("you order spicy paneer burger.\n"); break;
	    	    
	    	case 2: printf("you order aloo tikki burger.\n"); break;
	    	    
	    	case 3: printf("you order vegetable burger.\n"); break;
	    	    
	    	default:  printf("you enter invalid type.\n");
	   
	    }
	    break;
	case3:
		printf("press 1 for thin crust pizza.\n");
		printf("press 2 for cheese brust pizza.\n");                                                                                                                                                                                                               eese  \n");
		printf("press 3 for fresh dough pizza.\n");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf("you order thin crust pizza.\n"); break;
	    	    
	    	case 2: printf("you order cheese brust pizza.\n"); break;
	    	    
	    	case 3: printf("youorder fresh dough.\n"); break;
	    	    
	    	default:  printf("you enter invalid type.\n");
	   
	    }
	    break;
	
	case4:
		printf("press 1 for chinese vadapav.\n");
		printf("press 2 for cheese vadapav.\n") ;                                                                                                                                                                                                               eese  \n");
		printf("press 3 for mayonise vadapav.\n");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf("you order chinese vada pav.\n"); break;
	    	    
	    	case 2: printf("you order cheese vada pav.\n"); break;
	    	    
	    	case 3: printf("you order mayonise vada pav.\n"); break;
	    	    
	    	default:  printf("you enter invalid type.\n");
	   
	    }
	    break;
	
	    default: printf("you enter invalid choice");
	    
 }
}
