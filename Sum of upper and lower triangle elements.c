#include <stdio.h>

int main(){
    int A[3][3],uppersum=0,lowersum=0,r, c;

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

    //Sum of upper and lower triangle element
    for(r=0; r<3;r++){
        printf("\t");
        for(c=0;c<3;c++){
            if(r<c){
                uppersum= uppersum + A[r][c];
            }
            if(r>c){
                lowersum = lowersum + A[r][c];
            }
        }
    }
    printf("\nSum of upper triangle element is: %d",uppersum);
    printf("\nSum of lower triangle element is: %d",lowersum);

    return 0;
}
