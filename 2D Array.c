#include <stdio.h>

int main(){
    int r, c;
    int A[3][4] = { {5,6,7,8},{11,22,33,44},{9,18,21,26} };

    for(r=0; r<3;r++){
        for(c=0;c<4;c++){
            printf("%d ",A[r][c]);
        }
        printf("\n");
    }
    return 0;
}
