/*
 * Exercise 06: Swap two numbers
 * Difficulty: Beginner
 * Description: Swap two numbers using pointers.
 * Author: zhrfrd
 * Date: 17/11/2025
 */

#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 0;
    printf("a: %d, b: %d\n", a, b);

    int *pa = &a;
    int *pb = &b;
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    printf("a: %d, b: %d\n", a, b);

    return 0;
}