#include <stdio.h>

int main()
{
    int array1[5], array2[5], i, n;
    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<5; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Array1: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array1[i]);
    }

    for(i=0; i<5; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nArray2: ");
    for(i=0; i<5; i++)
    {
        printf("%d ",array2[i]);
    }

    return 0;
}
