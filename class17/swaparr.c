#include <stdio.h>

void swap(int b[2]) {
    int temp ;
    temp = b[0];
    b[0] = b[1];
    b[1] = temp;
}

int main() {
    int a[2] ={1,2};

    printf("Before swapping: a[0] = %d, a[1] = %d\n", a[0], a[1]);
    swap(a);
    printf("After swapping: a[0] = %d, a[1] = %d\n", a[0], a[1]);
    return 0;
}
