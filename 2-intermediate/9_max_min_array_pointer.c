/*
 * Exercise 09: Max min array pointer
 * Difficulty: Intermediate
 * Description: Find the maximum/minimum element of an array using pointers.
 * Author: zhrfrd
 * Date: 21/11/2025
 */

#include <stdio.h>

int main() {
    int arr[10] = {4, 5, 19, 7, 100, -1, 51, 7, -1, 24};
    int *p = arr;
    int max = *p;
    int min = *p;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[9]); i ++) {
        if (*p >= max) {
            max = *p;
        } else if (*p <= min) {
            min = *p;
        }

        p ++;
    }

    printf("Min: %i | Max: %i\n", min, max);

    return 0;
}