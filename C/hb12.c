#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the value of a,b,c,d,e");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a>b)
	   if(a>c)
	     if(a>d)
	        if(a>e)
            {
            	printf("a is big");
		    }    	   
	        else
	        {
	        	printf("e is big");
			}
		  
		 else
            if(d>e)
			{
				printf("d is big");
            }
			else
			{
				printf("e is big");
			}
			
		else
		   if(c>d)
		     if(d>e)
			 {
			 	printf("d is big");
    		 }	
			 else
			 {
			 	printf("e is big");
	    	 }
			 
	       else
			  if(c>e)
			  {
			  	printf("c is big");
	    	  }
			  else
			  {
			  	printf("e is big");
			  }
	else
	    if(b>c)
		  if(b>d)
		    if(b>e)	
			{
				printf("b is big");
		    }
			else
			{
				printf("e is big");
	   	    }
			   	  
	      else
		   if(d>e)
		    {
		    	ptrintf("d is big");
			}
			else
			{
				printf("e is big");
			}
		else
		   if(c>e)
		    {
		    	printf("c is big");
			}
			else
			{
				printf("e is big");
			}
					   		 
	getch();
}
		    
				   	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

