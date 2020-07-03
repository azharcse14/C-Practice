#include <stdio.h>

int main(){
    int A[3][3],sum=0,r, c;

    printf("Enter Elements Of A matrix: \n");
    for(r=0; r<3;r++){
        for(c=0;c<3;c++){
            printf("A[%d][%d] = ",r,c);
            scanf("%d",&A[r][c]);
        }
        printf("\n");
    }

    printf("A = ");
    for(r=0; r<3;r++){
        printf("\t");
        for(c=0;c<3;c++){
            printf("%d ", A[r][c]);
        }
        printf("\n");
    }

    //Sum of diagonal element
    printf("Diagonal element is: ");
    for(r=0; r<3;r++){
        printf("\t");
        for(c=0;c<3;c++){
            if(r==c){
                printf("%d",A[r][c]);
                sum= sum + A[r][c];
            }
        }
    }
    printf("\nSum of diagonal element is: %d",sum);
    return 0;
}
