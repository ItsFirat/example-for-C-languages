#include <stdio.h>
#include <stdlib.h>

int sum(int* , int*);
int main()
{
    int num1, num2, topla;
    int *ptr1, *ptr2;
    printf("enter the numbers :");
    scanf("%d%d", &num1,&num2);
    topla = sum(&num1 ,&num2);
    printf("max : %d", topla);
    return 0;
}
int sum(int* a , int* b)
{
    int max;
    if(*a > *b){
        max = *a;
    }
    else{
        max = *b;
    }
    return max;
}
