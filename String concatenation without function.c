
#include <stdio.h>

int main()
{
    char str1[50]= "I Love you BOTOLOTA.";
    char str2[]= " Every Second I miss you.";
    int i=0, len=0, j=0;

    while(str1[i]!='\0'){
        i++;
        len++;
    }
    while(str2[j]!='\0'){
        str1[len+j]= str2[j];
        j++;
    }
    printf("String: %s", str1);
    return 0;
}

