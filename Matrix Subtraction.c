#include <stdio.h>

int main(){
    int r, c, rn, cn;

    printf("Enter the row number: ");
    scanf("%d",&rn);
    printf("Enter the column number: ");
    scanf("%d",&cn);
    int A[rn][cn];
    int B[rn][cn];
    int C[rn][cn];

    printf("Enter Elements Of A matrix: \n");
    for(r=0; r<rn;r++){
        for(c=0;c<cn;c++){
            printf("A[%d][%d] = ",r,c);
            scanf("%d",&A[r][c]);
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

    printf("A = ");
    for(r=0; r<rn;r++){
        printf("\t");
        for(c=0;c<cn;c++){
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    printf("\nB = ");
    for(r=0; r<rn;r++){
        printf("\t");
        for(c=0;c<cn;c++){
            printf("%d ", B[r][c]);
        }
        printf("\n");
    }

    for(r=0; r<rn;r++){
        for(c=0;c<cn;c++){
            C[r][c] = A[r][c] - B[r][c];
        }
    }

    printf("\n\nA-B = ");
    for(r=0; r<rn;r++){
        printf("\t");
        for(c=0;c<cn;c++){
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
    return 0;
}
