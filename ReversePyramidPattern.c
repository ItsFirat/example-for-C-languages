#include <stdio.h>
#include <stdlib.h>

void PrintPattern(int );

int main()
{
    int n;
    printf("enter number of row: \n");
    scanf("%d", &n);
    PrintPattern(n);

    return 0;
}

void PrintPattern(int n){
    for(int i=0; i<n; i++){
        int space = i;
        for(int j=0; j<2*n-i-1; j++){
            if(space){
                printf(" ");
                space --;
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
