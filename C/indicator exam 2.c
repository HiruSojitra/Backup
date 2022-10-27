#include <stdio.h>

main()

{
    int a[100];
    int n , i;
    int *p = &a;    
 
    printf("Enter size of array: ");
    
    scanf("%d", &n);
 
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter using pointer: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p+i));
    }
 
}
