#include <stdio.h>
#include <stdlib.h>

void reverseArray();
void writeTheArray();
int number[7];
int i;

int main()
{
    printf("enter the number for array :");
    for(i=0; i<7; i++){
        scanf("%d", &number[i]);
    }
    printf("before sorting :\n");
    for(i=0; i<7; i++){
        printf("%3d", number[i]);
    }
    reverseArray();
    printf("\n after sorting :\n");
    writeTheArray();

    return 0;
}
void reverseArray(){
    int reverse, j;

    for(i=0; i<7; i++){
        for(j=i+1; j<7; j++){
            if(number[i] > number[j]){
                reverse = number[i];
                number[i]=number[j];
                number[j]=reverse;
            }
        }
    }
}
void writeTheArray(){
    for(i=0; i<7; i++){
        printf("%3d",number[i]);
    }
    printf("\n");
}
