#include <stdio.h>

int main(){
    char str1[20]="AMERICA";
    char str2[20]="BANGLADESH";
    char temp[20];

    printf("Before SWAPPING\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\n\nAfter SWAPPING\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    return 0;
}
