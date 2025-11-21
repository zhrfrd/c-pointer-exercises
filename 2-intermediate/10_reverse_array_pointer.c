/*
 * Exercise 10: Reverse array pointer
 * Difficulty: Intermediate
 * Description: Reverse an array using pointers.
 * Author: zhrfrd
 * Date: 21/11/2025
 */

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pL = arr;
    int *pR = &arr[9];

    while (pL < pR) {
        int temp = *pL;
        *pL = *pR;
        *pR = temp;

        pL ++;
        pR --;
    }

    for (int i = 0; i < 10; i ++) {
        printf("%i, ", arr[i]);
    }

    printf("\n");

    return 0;
}
