//1*2+2*3+3*4+........+n1*n2
#include<stdio.h>

int main(){
    int n1,n2,sum=0,a=1,b=2;

    printf("Enter the value of n1: ");
    scanf("%d",&n1);
    printf("Enter the value of n2: ");
    scanf("%d",&n2);

    printf("1.2+2.3+3.4+........+n1.n2");

    while(a<=n1 && b<=n2){
        sum=sum+a*b;
        a++;
        b++;
    }

    printf("= %d\n",sum);

    return 0;
}
