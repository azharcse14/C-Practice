#include <stdio.h>

int main(){
    char str1[]="BOTOLOTA, Do you know?";
    char str2[]=("I miss you...");
    char con[20];

    strcat(str1, str2);

    printf("str1 %s",str1);
    return 0;
}
