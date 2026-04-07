// change pointer value
#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    *p = 20;
    printf("new value of x : %d\n", x);
    return 0;
}