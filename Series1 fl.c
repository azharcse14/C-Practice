//1*2+2*3+3*4+........+n1*n2
#include <stdio.h>

int main{
    int n1, n2, sum=0,i,j;
    printf("Enter the value of n1: ");
    scanf("%d",&n1);
    printf("Enter the value of n2: ");
    scanf("%d",&n2);

    printf("1.2+2.3+3.4+........+n1.n2");

    for(i=1,j=2;i<=n1&&j<=n2;i++,j++){
        sum=sum+i*j;
    }
    printf("= %d",sum);

    return 0;
}
