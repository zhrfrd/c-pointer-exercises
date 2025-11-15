/*
 * Exercise 02: Pointer value print
 * Difficulty: Beginner
 * Description: Print the value of a variable using a pointer.
 * Author: zhrfrd
 * Date: 15/11/2025
 */

#include <stdio.h>

int main(void) {
    int a = 18;
    int *p = &a;

    printf("%i\n", *p);

    return 0;
}