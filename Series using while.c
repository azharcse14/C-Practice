
#include<stdio.h>

int main()
{
    int n,a=1, sum=0;
    printf("Enter the last number: ");
    scanf("%d",&n);
    printf("1+2+3+.....+%d",n);

    while(a<=n){
        sum=sum+a;
        a++;
    }

    printf("= %d",sum);

    getch();
}
