#include <stdio.h>

int main(){
    int a,n,sum=0;
    printf("Input the any number:");
    scanf("%d",&n);

    for(a=2;a<=n;a=a+2){
       sum=sum+a;
    }
    printf("%d\n",sum);
    return 0;
}