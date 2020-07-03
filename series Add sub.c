//1-2+3-4+5..............
#include <stdio.h>

int main()
{
    int i,n,even=0,odd=0,sum;
    printf("Enter n: ");
    scanf("%d",n);

    if(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }

    }
    sum=odd-even;
    printf("Result: %d",sum);
    return 0;
}
