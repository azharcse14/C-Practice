#include<stdio.h>

int main()
{
    int num, temp, r, sum=0, fact, i;

    printf("Enter the digit: ");
    scanf("%d",& num);
    temp=num;

    while(temp!=0)
    {
        r= temp%10;

        fact=1;
        for(i=1; i<=r; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is a STRONG NUMBER\n",num);
    }
    else
    {
        printf("%d is not a STRONG NUMBER\n",num);
    }

    return 0;
}
