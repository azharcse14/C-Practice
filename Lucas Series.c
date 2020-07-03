
#include <stdio.h>

int main(){
    int fn=2,sn=1,lcs,count=2,ln;
    printf("Enter last NUMBER: ");
    scanf("%d",&ln);

    while(count<ln){
        if(count<=2){
            lcs=count;
        }
        else{
            lcs=fn+sn;
            fn=sn;
            sn=lcs;
        }
        printf("%d  ",lcs);
        count++;
    }

    return 0;
}
