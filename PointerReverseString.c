#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseString(char *str);

int main()
{
    char str[50];
    printf("enter the text :");
    gets(str);
    ReverseString(str);
    printf("reverse of the string : %s", str);
    return 0;
}
void ReverseString(char *str){
    char *begin_ptr = str;
    char *end_ptr = str + strlen(str) - 1;

    for(int i=0; i<(strlen(str))/2; i++){
        char temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;

        begin_ptr++;
        end_ptr--;
    }

}
