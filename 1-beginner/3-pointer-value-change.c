/*
 * Exercise 03: Pointer value change
 * Difficulty: Beginner
 * Description: Change the value of a variable using a pointer.
 * Author: zhrfrd
 * Date: 15/11/2025
 */

#include <stdio.h>

int main(void) {
    int a = 18;
    int *p = &a;
    printf("Old: %i\n", *p);

    *p = 20;
    printf("New: %i\n", *p);

    return 0;
}