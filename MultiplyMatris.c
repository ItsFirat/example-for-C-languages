#include <stdio.h>
#include <stdlib.h>

int Multiply(int[][], int[][]);
int main()
{
    int row, column,k;
    int i,j;
    int b[3][3];
    int a[3][3];
    int c[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("enter number for display a[%d][%d] : ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("enter number for display b[%d][%d] : ", i, j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("multiply of matris : \n");
    for(row = 0; row<3; row++){
        for(column = 0; column<3; column++){
            c[row][column] = 0;
            for(k=0; k<3; k++){
                c[row][column] += a[row][k] * b[k][column];
            }
            printf("%3d", c[row][column]);
        }
        printf("\n");
    }
    return 0;
}
