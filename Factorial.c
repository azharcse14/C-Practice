#include <stdio.h>

int main()
{

    int i,n,fact=1;
    printf("Enter any positive prime number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact= fact*i;
    }
    printf("Result is: %d",fact);
    return 0;
}
