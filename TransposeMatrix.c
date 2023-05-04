#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("enter number of rows and columns: \n");
    scanf("%d", &n);
    int matrix[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("enter matrix for display [%d][%d]\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("transpose matrix :\n");
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%3d" ,matrix[j][i]);
        }
        printf("\n");

    }
    return 0;
}
