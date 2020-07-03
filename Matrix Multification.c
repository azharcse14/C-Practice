//MATRIX MULTIFICATION
#include <stdio.h>

int main(){
    int fm[10][10], sm[10][10],result[10],fmr,fmc,smr,smc,i,j,k;

    printf("Enter the first matrix row: ");
    scanf("%d",&fmr);
    printf("Enter the first matrix column: ");
    scanf("%d",&fmc);

    printf("Enter the second matrix row: ");
    scanf("%d",&smr);
    printf("Enter the second matrix column: ");
    scanf("%d",&smc);

    while(fmc!=smr){
        printf("Error! First matrix column and second matrix row not equal.\n");

        printf("Enter the first matrix row: ");
        scanf("%d",&fmr);
        printf("Enter the first matrix column: ");
        scanf("%d",&fmc);

        printf("Enter the second matrix row: ");
        scanf("%d",&smr);
        printf("Enter the second matrix column: ");
        scanf("%d",&smc);
        }

        //First matrix input........
        printf("Enter the first matrix: ");
        for(i=0;i<fmr;i++){
            printf("fm[%d][%d]",i,j);
            for(j=0;j<fmc;j++){
                scanf("%d",&fm[i][j]);
            }
            printf("\n");
        }

        //Second matrix input........
        printf("Enter the second matrix: ");
        for(i=0;i<smr;i++){
            printf("sm[%d][%d]",i,j);
            for(j=0;j<smc;j++){
                scanf("%d",&sm[i][j]);
            }
            printf("\n");
        }

    return 0;
}
