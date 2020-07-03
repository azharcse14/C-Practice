#include <stdio.h>

int main()
{
    char str[]= "I Love you BOTOLOTA";
    int i=0, len=0;

    while(str[i]!='\0'){
        i++;
        len++;
    }
    printf("String Length: %d", len);
    return 0;
}

