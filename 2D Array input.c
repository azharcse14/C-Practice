#include <stdio.h>

int main(){
    int r, c, rn, cn;

    printf("Enter the row number: ");
    scanf("%d",&rn);
    printf("Enter the column number: ");
    scanf("%d",&cn);
    int A[rn][cn];
    int B[rn][cn];

    printf("Enter Elements Of A matrix: \n");
    for(r=0; r<rn;r++){
        for(c=0;c<cn;c++){
            printf("A[%d][%d] = ",r,c);
            scanf("%d",&A[r][c]);
        }
        printf("\n");
    }
    printf("A = ");
    for(r=0; r<rn;r++){
        printf("\t");
        for(c=0;c<cn;c++){
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("\nEnter Elements Of B matrix: \n");
    for(r=0; r<rn;r++){
        for(c=0;c<cn;c++){
            printf("B[%d][%d] = ",r,c);
            scanf("%d",&B[r][c]);
        }
        printf("\n");
    }
    printf("B = ");
    for(r=0; r<rn;r++){
        printf("\t");
        for(c=0;c<cn;c++){
            printf("%d ", B[r][c]);
        }
        printf("\n");
    }
    return 0;
}
