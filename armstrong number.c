#include<stdio.h>

int main(){
    int num, temp, r, sum=0;

    printf("Enter the digit: ");
    scanf("%d",& num);
    temp=num;

    while(temp!=0){
        r= temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }

    if(num==sum){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }

    return 0;
}
