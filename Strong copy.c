
#include <stdio.h>

int main(){
    char str1[]="BOTOLOTA, Do you know? I miss you...";
    char str2[20];

    strcpy(str2, str1);

    printf("str2: %s",str2);
    return 0;
}
