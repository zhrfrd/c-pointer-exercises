/*
 * Exercise 01: Basic pointer declaration
 * Difficulty: Beginner
 * Description: Declare a pointer and assign it the address of a variable.
 * Author: zhrfrd
 * Date: 15/11/2025
 */

#include <stdio.h>

int main(void) {
    int a = 15;
    int *p = &a;
    printf("%p\n", p);

    return 0;
}