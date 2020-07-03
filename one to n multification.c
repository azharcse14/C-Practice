#include<stdio.h>

int main(){
    int i,n,mul=1;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        mul=mul*i;
    }
    printf("MULTIFICATION: %d\n",mul);

    return 0;
}
