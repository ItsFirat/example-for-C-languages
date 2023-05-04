#include <stdio.h>
#include <stdlib.h>

int FindEbob(int , int );

int main()
{
    int num1, num2, ebob;

    printf("input 1st number :\n");
    scanf("%d", &num1);
    printf("input 2nd number : \n");
    scanf("%d" ,&num2);

    ebob = FindEbob(num1,num2);
    printf("the ebob of %d and %d = %d", num1, num2, ebob);
    return 0;
}

int FindEbob(int num1, int num2){

    while(num1 != num2){
        if(num1 > num2){
            return FindEbob(num1 - num2, num2);
        }
        else{
            return FindEbob(num1, num2 - num1);
        }
        return num1;
    }
}
