#include <stdio.h>
#include <stdlib.h>

int IsPerfect(int );

int main()
{
    int number, response;
    printf("enter the number: \n");
    scanf("%d", &number);
    response = IsPerfect(number);
    if(response == number){
        printf("%d perfect number.", number);
    }
    else{
        printf("%d not perfect number.", number);
    }
    return 0;
}
int IsPerfect(int num){
    int sum = 0;
    for(int i = 1; i<=num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}
