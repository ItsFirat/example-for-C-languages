#include<stdio.h>
#include<math.h>

int main(void){

int area;
double result;
const double PI = 3.14159;

printf("shapes:\n");
printf("1.triangle\n 2.square\n 3.rectangle\n 4.circle\n");
scanf("%d", &area);

switch (area)
{
case 1 :
    printf("enter of triangle heihgt: ");
    double heihgt, width;
    scanf("%lf", &heihgt);
    printf("enter of triangle width: ");
    scanf("%lf", &width);
    result = (width * heihgt)/2;
    printf("area is: %.2lf", result);
    break;
case 2 : 
    printf("enter edge of square: ");
    double edge;
    scanf("%lf", &edge);
    result = pow(edge , 2);
    printf("area is: %.2lf", result);
    break;
    case 3 :
    printf("enter of rectangle short edge: ");
    double long_edge, short_edge;
    scanf("%lf", &short_edge);
    printf("enter of rectangle long edge: ");
    scanf("%lf", &long_edge);
    result = long_edge * short_edge;
    printf("area is: %.2lf", result);
    break;
    case 4 :
    printf("enter radius of circle ");
    double radius;
    scanf("%lf", &radius);
    result = PI * pow(radius , 2);
    printf("area is : %.2lf", result);   
    break;
default:
    printf("invalid area");
    break;
}

    return 0;
}
