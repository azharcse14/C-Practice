#include <stdio.h>

int main(){
    int a[30], i, n;
    printf("How many Fibonacci number: ");
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(i=2; i<n; i++){
        a[i]= a[i-1]+a[i-2];
    }

    printf("\n");
    printf("Fibonacci Number is:");
    for(i=0; i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
