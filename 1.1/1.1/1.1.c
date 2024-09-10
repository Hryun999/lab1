#include <stdio.h>
#include <limits.h>

int main() {
    int mass[10] = { 10, 15, 3, 8, 64, 124, 55, 20, 19, 13 };
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < 10; i++) {
        if (mass[i] < min) {
            min = mass[i];
        }
        if (mass[i] > max) {
            max = mass[i];
        }
    }

    printf("max: %d - min: %d = %d\n", max, min, max - min);
    return 0;
}