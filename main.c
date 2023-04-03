#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int guesscount=0, secretNumber, guess;


void createSecretNumber();
void enterGuess();
void check();

int main()
{
     srand(time(NULL));
     createSecretNumber();
     check();

    return 0;
}

void createSecretNumber(){
secretNumber = 100 + rand() % 999;

}

void enterGuess(){
    printf("enter a number :");
    scanf("%d", &guess);
}
void check(){
     while(guess != secretNumber){
        enterGuess();
        if(guess == secretNumber){
                printf("%d. tahminde bildin", guesscount);
                break;
        }
        if(guess > secretNumber){ printf("daha dusuk sayi girin.\n");
        }
        else{
            printf("daha yuksek sayi girin.\n");
        }

        guesscount++;
     }
}
