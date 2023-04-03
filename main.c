#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROWS 3
#define COLUMNS 3

// LED'leri tutacak matris
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

// Sayının her bir rakamını yanıyor gibi yazdıran fonksiyon
void printNumber(int number) {
    int digits[4];
    int i, j, k, digit;

    // Sayıyı basamaklarına ayırıyoruz
    for (i = 0; i < 4; i++) {
        digits[i] = number % 10;
        number /= 10;
    }

    // Her bir LED'nin yanıp söneceği veya sönük kalacağı durumu tutan matris
    char ledStatus[ROWS][4 * COLUMNS];
    for (i = 0; i < ROWS; i++) {
    for (j = 0; j < 4 * COLUMNS; j++) {
        ledStatus[i][j] = ' ';
    }
}

    // Her bir rakamın LED matrisini ledStatus matrisine kopyalıyoruz
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
        printf("Bir sayi girin (en az 4 basamakli): ");
        scanf("%d", &number);
    } while (number < 1000 || number > 9999);
    printNumber(number);

    return 0;
}


