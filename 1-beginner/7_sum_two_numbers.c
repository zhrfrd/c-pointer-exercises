/*
 * Exercise 07: Sum two numbers
 * Difficulty: Beginner
 * Description: Find the sum of two numbers using pointers.
 * Author: zhrfrd
 * Date: 18/11/2025
 */

#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    int *pa;
    int *pb;

    pa = &a;
    pb = &b;

    printf("%d\n", *pa + *pb);

    return 0;
}