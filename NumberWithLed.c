#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

char leds[10][ROWS][COLUMNS] = {
    {
        {' ', '_', ' '},
        {'|', ' ', '|'},
        {'|', '_', '|'}
    },
    {
        {' ', ' ', ' '},
        {' ', ' ', '|'},
        {' ', ' ', '|'}
    },
    {
        {' ', '_', ' '},
        {' ', '_', '|'},
        {'|', '_', ' '}
    },
    {
        {' ', '_', ' '},
        {' ', '_', '|'},
        {' ', '_', '|'}
    },
    {
        {' ', ' ', ' '},
        {'|', '_', '|'},
        {' ', ' ', '|'}
    },
    {
        {' ', '_', ' '},
        {'|', '_', ' '},
        {' ', '_', '|'}
    },
    {
        {' ', '_', ' '},
        {'|', '_', ' '},
        {'|', '_', '|'}
    },
    {
        {' ', '_', ' '},
        {' ', ' ', '|'},
        {' ', ' ', '|'}
    },
    {
        {' ', '_', ' '},
        {'|', '_', '|'},
        {'|', '_', '|'}
    },
    {
        {' ', '_', ' '},
        {'|', '_', '|'},
        {' ', '_', '|'}
    }
};

void printNumber(int number) {
    int digits[4];
    int i, j, k, digit;


    for (i = 0; i < 4; i++) {
        digits[i] = number % 10;
        number /= 10;
    }

    
    char ledStatus[ROWS][4 * COLUMNS];
    for (i = 0; i < ROWS; i++) {
    for (j = 0; j < 4 * COLUMNS; j++) {
        ledStatus[i][j] = ' ';
    }
}

   
    for (i = 0; i < 4; i++) {
        digit = digits[3 - i];
        for (j = 0; j < ROWS; j++) {
            for (j = 0; j < ROWS; j++) {
    for (k = 0; k < COLUMNS; k++) {
        ledStatus[j][i * COLUMNS + k] = leds[digit][j][k];
    }
}

        }
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < 4 * COLUMNS; j++) {
            if (ledStatus[i][j] == ' ') {
                printf(".");
            } else {
                printf("%c", ledStatus[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {

    int number;
    do {
        printf("enter a number (at least 4 digits): ");
        scanf("%d", &number);
    } while (number < 1000 || number > 9999);
    printNumber(number);

    return 0;
}


