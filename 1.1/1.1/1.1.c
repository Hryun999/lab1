#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int main() {
    int mass[10] = { 0 };
    int max = INT_MIN;
    int min = INT_MAX;

    srand(time(NULL));

    printf("mass: ");

    for (int i = 0; i < 10; i++) {
        mass[i] = rand() % 150 - 75;
        printf("%d ", mass[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (mass[i] < min) {
            min = mass[i];
        }
        if (mass[i] > max) {
            max = mass[i];
        }
    }

    printf("max: %d min: %d\n", max, min);

    return 0;
}