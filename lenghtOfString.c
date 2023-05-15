
#include <stdio.h>
#include <stdlib.h>
int lenghtOfString(char* );
int main()
{
    int sonuc;
    char str[25];
    printf("enter the string :");
    gets(str);
    sonuc = lenghtOfString(str);
    printf("lenght of the string : %d", sonuc);
    return 0;
}
int lenghtOfString(char* ch){
    int len = 0;
    while(*ch !='\0'){
        len ++;
        ch++;
    }
    return len;

}
