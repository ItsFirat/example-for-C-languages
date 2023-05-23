#include <stdio.h>
#include <stdlib.h>

int wordCount(char*);

int main()
{
    char message[100];
    printf("enter the message : ");
    gets(message);
    int myWordCounter = wordCount(message);
    printf("there are %d word in the entered sentences.", myWordCounter);
    return 0;
}
int wordCount(char* ptr){
    int i =0, myWord = 0;
    while(*(ptr+i) != '\0'){
        if(*(ptr+i) == ' '){
            myWord++;
        }
        i++;
    }
    return myWord +1;
}
