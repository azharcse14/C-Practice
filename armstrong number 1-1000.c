#include<stdio.h>

int main()
{
    int i, fn, ln, temp, r, sum=0;

    printf("Enter the first number: ");
    scanf("%d",&fn);
    printf("Enter the last number: ");
    scanf("%d",&ln);

    for(i=fn; i<=ln; i++)
    {

        temp=i;

        while(temp!=0)
        {
            r= temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }

        if(i==sum)
        {
            printf("Armstrong Number is :");
            printf("%d\n",i);
        }

        sum=0;
    }

    return 0;
}

