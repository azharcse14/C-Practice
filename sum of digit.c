#include<stdio.h>

int main(){
    int num, temp, r, sum=0;

    printf("Enter the digit: ");
    scanf("%d",& num);
    temp=num;

    while(temp!=0){
        r= temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("SUM of DIGIT: %d",sum);

    return 0;
}
