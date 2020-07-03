#include <stdio.h>

int main(){
    long long fn=0,sn=1,fibo,count=0,ln;
    printf("Enter last NUMBER: ");
    scanf("%ulld",&ln);

    while(count<ln){
        if(count<=1){
            fibo=count;
        }
        else{
            fibo=fn+sn;
            fn=sn;
            sn=fibo;
        }
        printf("%ulld  ",fibo);
        count++;
    }

    return 0;
}
