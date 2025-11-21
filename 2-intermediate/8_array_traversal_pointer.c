/*
 * Exercise 08: Array traversal pointer
 * Difficulty: Intermediate
 * Description: Use pointer arithmetic to traverse an array.
 * Author: zhrfrd
 * Date: 21/11/2025
 */

#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *p = arr;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i ++) {
        printf("%i", *(p + i));
    }

    printf("\n");

    return 0;
}