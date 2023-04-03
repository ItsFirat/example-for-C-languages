#include<stdio.h>
#include<math.h>

int main(void){

char op;
double num1, num2;

printf("enter an operator:\n ");
scanf("%c", &op);

printf("enter number 1:");
scanf("%lf", &num1);

printf("enter number 2: ");
scanf("%lf", &num2);

switch (op)
{
case '+' :
    printf("%lf", num1 + num2);
    break;
case '-' :
    if (num1 > num2)
    {
      printf("%lf", num1 - num2);  
    }
    else{
      printf("%lf", num2 - num1);  
    }
    break;
case '*' :
    printf("%lf", num1 * num2);
    break;
case '/' :
    printf("%lf", num1 / num2);
    break;
default:
   printf("invalid operator");
    break;
}


    return 0;
}