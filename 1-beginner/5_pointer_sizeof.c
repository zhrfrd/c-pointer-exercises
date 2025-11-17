/*
 * Exercise 05: Pointer sizeof
 * Difficulty: Beginner
 * Description: Use a pointer to print the size of a variable (with sizeof).
 * Author: zhrfrd
 * Date: 17/11/2025
 */

#include <stdio.h>

int main(void) {
    char a = 'd';
    printf("char: %zu\n", sizeof(a));

    int b = 14;
    printf("int: %zu\n", sizeof(b));

    float c = 14.54;
    printf("float: %zu\n", sizeof(c));

    double d = 12.4;
    printf("double: %zu\n", sizeof(d));

    return 0;
}