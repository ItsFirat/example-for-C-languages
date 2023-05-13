#include <stdio.h>
#include <stdlib.h>

int maximum(int* , int*);
int main()
{
    int num1, num2, max;
    printf("enter the numbers :");
    scanf("%d%d", &num1,&num2);
    max = maximum(&num1 ,&num2);
    printf("max : %d", max);
    return 0;
}
int maximum(int* a , int* b)
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
