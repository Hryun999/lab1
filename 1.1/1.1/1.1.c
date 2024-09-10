#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf_s("%d", &rows);
    printf("Enter the number of columns: ");
    scanf_s("%d", &columns);

    int** array = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array[i] = (int*)malloc(columns * sizeof(int));
    }

    int max = INT_MIN;
    int min = INT_MAX;

    srand(time(NULL));

    printf("mass:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = rand() % 150 - 75;
            printf("%d ", array[i][j]);

            if (array[i][j] < min) {
                min = array[i][j];
            }
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
        printf("\n");
    }

    printf("max: %d min: %d\n", max, min);

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += array[i][j];
        }
        printf("rowSum: %d\n", rowSum);
    }

    for (int j = 0; j < columns; j++) {
        int columnSum = 0;
        for (int i = 0; i < rows; i++) {
            columnSum += array[i][j];
        }
        printf("columnSum: %d\n", columnSum);
    }

    for (int i = 0; i < rows; ++i) {
        free(array[i]);
    }
    free(array);

    return 0;
}
