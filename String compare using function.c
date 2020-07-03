

#include <stdio.h>

int main()
{
    char str1[50]= "I Love you BOTOLOTA.";
    char str2[]= " Every Second I miss you.";
    int d= strcmp(str1,str2);
    if(d==0){
        printf("String are EQUAL");
    }
    else{
        printf("String r not equal.");
    }
    return 0;
}

