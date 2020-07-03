#include <stdio.h>

int main(){

    while(1){
    int a,b,r;
    printf("Enter any number: ");
    scanf("%d",&a);

    for(b=1;b<=10;b++){
        r=a*b;
        printf("%d X %d = %d\n",a,b,r);
    }
    }
    return 0;
}
