#include <stdio.h>

int main(){
    int i, n, a[50], sum=0;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
