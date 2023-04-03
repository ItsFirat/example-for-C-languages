#include <stdio.h>
#include <stdlib.h>

int factorial(int x);
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    factorial(x);
    printf("%d! = %d", x, factorial(x));
    return 0;
}

int factorial(int x){
    if(x == 0)
        return 1;
    else
        return x * factorial(x-1);

}
