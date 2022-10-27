#include <stdio.h>
#define MAX_SIZE 100
 
int main()
{
    int a[100];
    int num, i;
    int * p = a;    
 
    printf("Enter size of array: ");
    
    scanf("%d", &num);
 
    printf("Enter elements in array:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", p);
        
        p++;
    }
    p = a;
 
    printf("Entered array elements are: ");
    for (i = 0; i < num; i++)
    {
        
        printf("%d ", *p);
        
        p++;
    }
 
    return 0;
}
