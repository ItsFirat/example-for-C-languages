#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i,j;

    printf("enter a number: \n");
    scanf("%d",&number);

    for(i=2; i<=number; i++){
           int flag = 1;
        for(j=2; j<i;j++){
            if(i%j==0){
                 flag = 0;
                  break;
            }
        }
        if(flag==1)
            printf("%d\n", i);
    }
    return 0;
}
