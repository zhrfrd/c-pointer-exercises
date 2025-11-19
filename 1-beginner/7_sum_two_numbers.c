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