#include <stdio.h>
#include <string.h>

int isEven(const int NUM)
{
    return !(NUM & 1);
}
int isPrime(const int NUM)
{
    int i;  

    if (NUM < 0)
        return 0;
      
    for ( i=2; i<=NUM/2; i++ )    
    {    
        if (NUM % i == 0)    
        {  
            return 0;
        }    
    }   
      
    return 1;  
}


int main()
{
    FILE *fPtrIn, *fPtrEven, *fPtrOdd, *fPtrPrime;

    
    int num, success;

    fPtrIn   = fopen("demo_1.txt", "r");
    fPtrEven = fopen("even.txt" , "w");
    fPtrOdd  = fopen("odd.txt"  , "w");
    fPtrPrime= fopen("prime.txt", "w");

    if(fPtrIn == NULL || fPtrEven == NULL || fPtrOdd == NULL || fPtrPrime == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        
    }

    printf("File opened successfully. Reading integers from file. \n\n");

    while (fscanf(fPtrIn, "%d", &num) != -1)
    {
        if (isPrime(num))
            fprintf(fPtrPrime, "%d\n", num);
        else if (isEven(num))
            fprintf(fPtrEven, "%d\n", num);
        else
            fprintf(fPtrOdd, "%d\n", num);

    }

    fclose(fPtrIn);
    fclose(fPtrEven);
    fclose(fPtrOdd);
    fclose(fPtrPrime);

    printf("Data written to files successfully.");

	return 0;
}

