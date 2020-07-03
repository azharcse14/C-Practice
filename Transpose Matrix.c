#include <stdio.h>

int main(){
    int r, c, rn, cn;

    printf("Enter the row number: ");
    scanf("%d",&rn);
    printf("Enter the column number: ");
    scanf("%d",&cn);
    int A[rn][cn];
    int transpose[rn][cn];

    printf("Enter Elements Of A matrix: \n");
    for(r=0; r<rn;r++){
        for(c=0;c<cn;c++){
            printf("A[%d][%d] = ",r,c);
            scanf("%d",&A[r][c]);
        }
        printf("\n");
    }

    //Transpose
    for(r=0;r<rn;r++){
        for(c=0;c<cn;c++){
            transpose[c][r]=A[r][c];
        }
    }

    printf("Entered Matrix:\n");
    for(r=0; r<rn;r++){
        printf("\t");
        for(c=0;c<cn;c++){
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("Transpose Matrix:\n");
    for(r=0; r<cn;r++){
        printf("\t");
        for(c=0;c<rn;c++){
            printf("%d ", transpose[r][c]);
        }
        printf("\n");
    }

    return 0;
}
