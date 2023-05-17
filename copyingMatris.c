#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// copying array with pointer

void copyArray(int *arr1, int *arr2, int size) {
    int i;
    if (size % 2 == 0) {
        for (i = 0; i < size; i++) {
            *(arr2 + i) = *(arr1 + size - i - 1);
        }
    } else {
        for (i = 0; i < size; i++) {
            *(arr2 + i) = *(arr1 + i);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr1[i] = rand() % 100 + 1;
    }

    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }

    copyArray(arr1, arr2, size);

    printf("\n\nCopied Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
