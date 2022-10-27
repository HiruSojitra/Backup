
#include <stdio.h>/*

void minmax(int * numbers, int size, int * min, int * max);


int main()
{
    int a[100], size, i;

    int min, max;


    
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in array: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", (a + i));
    }


    
    MinMax(a, size, &min, &max);


    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);


    return 0;
}
*/
void MinMax(int * n, int size, int * min, int * max)
{
    int i;

    *min = *(n + 0);
    *max = *(n + 0); 

    for (i = 0; i < size; i++)
    {
        
        if(*(n + i) < *(min))
            *min = *(n + i);

       
        if(*(n + i) > *(max))
            *max = *(n + i);
    }
}
