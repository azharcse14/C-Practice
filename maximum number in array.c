#include <stdio.h>

int main(){
    int i, n, a[50], sum=0, max;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    max = a[0];

    for(i=0;i<n;i++){
        if(max<a[i]){
            max= a[i];
        }
    }
    printf("MAXIMUM: %d",max);
    return 0;
}
