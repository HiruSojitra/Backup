
#include <stdio.h>
#include <stdlib.h>



int isEven(const int NUM);
int isPrime(const int NUM);


int main()
{
    
    FILE * fpIn,
         * fpEven, 
         * fPOdd, 
         * fPPrime;

    
    int num, success;

    fPIn  = fopen("data/numbers.txt", "r");
    fPEven = fopen("data/even-numbers.txt" , "w");
    fPOdd  = fopen("data/odd-numbers.txt"  , "w");
    fPPrime= fopen("data/prime-numbers.txt", "w");


    
    if(fPIn == NULL || fPEven == NULL || fPOdd == NULL || fPPrime == NULL)
    {
        
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
    }


    
    printf("File opened successfully. Reading integers from file. \n\n");

    
    while (fscanf(fPIn, "%d", &num) != -1)
    {
        
        if (isPrime(num))
            fprintf(fPPrime, "%d\n", num);
        else if (isEven(num))
            fprintf(fPEven, "%d\n", num);
        else
            fprintf(fPOdd, "%d\n", num);

    }


    
    fclose(fPIn);
    fclose(fPEven);
    fclose(fPOdd);
    fclose(fPPrime);

    printf("Data written to files successfully.");


    return 0;
}

