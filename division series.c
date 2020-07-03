//1+1/2+1/3+1/4+........+1/n
#include<stdio.h>

 int main(){
    double n, sum=0,i;
    printf("Enter the value of n: ");
    scanf("%lf",&n);

    for(i=1;i<=n;i++){
        sum=sum+(1/i);

        if(i==1){
            printf("\n1+");
        }else if(i==n){
            printf("%.2lf+",i);
        }else{
            printf("1/%.2lf+",i);
        }
    }
    printf("= %.2lf",sum);

    return 0;
}
