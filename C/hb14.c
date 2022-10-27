#include<stdio.h>
#include<conio.h>
main()
{
	
   	int choice ,type;
	
	 printf("press1 for english .\n");
	 printf("press 2 for hindi .\n");
	 printf("press 3 for gujarati.\n ");
	 
	
	 printf("enter your choice");
	 scanf("%d",&choice);

switch (choice)
  {
	case1:
		printf("press 1 for top-up .\n");
		printf("press 2 for  balance inquire .\n");
		printf("press 3 for chat with manager .\n ");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf("you press top-up.\n"); break;
	    	    
	    	case 2: printf("you press balance inquire.\n"); break;
	    	    
	    	case 3: printf("you press chat with manager.\n"); break;
	    	    
	    	default:  printf("you enter invalid type.\n");
	   
	    }
	    break;
	
	case2:
		printf(" top-up ke liye 1 dabaye.\n");
		printf(" balance inquire ke liye 2 dabaye.\n");
		printf(" manager se bat krne ke liye 3 dabaye .\n ");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf(" aapne top-up ka option select kiya he.\n"); break;
	    	    
	    	case 2: printf(" aapne balace inquire ka option select kiya he.\n"); break;
	    	    
	    	case 3: printf(" aapne manager se bat krne ka option select kiya he.\n"); break;
	    	    
	    	default:  printf("you enter invalid type.\n");
	   
	    }
	    break;
	case3:
		printf(" top-up krva mate 1 dabavo.\n");
		printf(" inquire krva mate 2 dabavo.\n");                                                                                                                                                                                                               eese  \n");
		printf(" manager jode vat krva 3 dabavo.\n");
	
	    printf("enter your choice");
	    scanf("%d", &type);
	    
	    switch(type)
	    {
	    	
	    	case 1: printf(" tme top-up no option select kryo che.\n"); break;
	    	    
	    	case 2: printf(" tme inquire no option select kryo che.\n"); break;
	    	    
	    	case 3: printf(" tme manager jode vat krvano option select kryo che.\n"); break;
	         
			default:  printf("you enter invalid type.\n");
	    	    
	    }
	    break;	
 }
 
    getch();
}
