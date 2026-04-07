#include <stdio.h>

int main() {
    int x = 10;

    printf("Address of x: %p\n", &x);

    int *p = &x;

    printf("Value of p (address of x): %p\n",p);

    printf("Address of p: %p\n", &p);

    return 0;
}