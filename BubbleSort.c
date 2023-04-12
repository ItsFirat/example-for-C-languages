#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Sort(int a[]);
int main()
{
    srand(time(NULL));
    int matrix[13];
    int i,j,x;

    printf("before sorting :\n");
    for(i=0; i<13; i++){
        x = 1 + rand() % 99;
        matrix[i] = x;
        printf("%3d", matrix[i]);
    }
    printf("\n");
    // sorting

    Sort(matrix);

    return 0;
}
void Sort(int a[]){
    int i,j,temp;
     for(i=0; i<12; i++){
        for(j=i+1; j<13; j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("after sorting :\n");

    for(i=0; i<13; i++){
        printf("%3d",a[i]);
    }
}


