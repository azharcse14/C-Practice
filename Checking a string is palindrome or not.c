#include <stdio.h>

int main()
{
    char str[]= "MADAM";
    char strr[30];
    int i=0, len=0, j=0;

    while(str[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--, j++){
        strr[j] = str[i];
    }
    strr[j]='\0';
    printf("String : %s\n", strr);

    int d= strcmp(strr,str);

    if(d==0){
        printf("String are Palindrome");
    }
    else{
        printf("String are not Palindrome");
    }
    return 0;
}
