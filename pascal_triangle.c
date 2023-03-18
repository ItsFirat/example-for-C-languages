#include<stdio.h>
int main (){

 int i,j,rows,space, number = 1;
    printf("enter the number of rows: ");
    scanf("%d", &rows);

    for(i=0; i<rows; i++){
        for(space = 1; space<=rows - i; space++){
            printf("  ");
        }
        for(j=0; j<=i; j++){
           if (i == 0 || j == 0)
            number = 1;
           else
            number = number * (i-j+1)/j;

           printf("%4d", number);
        }
        printf("\n");
    }


    return 0;
}