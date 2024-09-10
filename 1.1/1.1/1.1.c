#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main() {
    int size;

    printf("Enter size of array: ");
    scanf_s("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int max = INT_MIN;
    int min = INT_MAX;

    srand(time(NULL));

    printf("mass: ");

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 150 - 75;
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("max: %d min: %d\n", max, min);

    free(array);
    return 0;
}