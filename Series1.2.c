//1*3*5+2*5*7+3*7*9+........+n1*n2*n3
#include<stdio.h>

int main(){
    int n1,n2,n3,sum=0,a=1,b=3,c=5;

    printf("Enter the value of n1: ");
    scanf("%d",&n1);
    printf("Enter the value of n2: ");
    scanf("%d",&n2);
    printf("Enter the value of n3: ");
    scanf("%d",&n3);

    printf("1.3.5+2.5.7+3.7.9+........+n1.n2.n3");

    while(a<=n1 && b<=n2 && c<=n3){
        sum=sum+a*b*c;
        a++;
        b=b+2;
        c=c+2;
    }

    printf("= %d\n",sum);

    return 0;
}
