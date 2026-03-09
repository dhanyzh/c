//power a**b
#include <stdio.h>
int main() {
    int power,base;
    printf("Enter power,base: ");
    scanf("%d %d", &power, &base);
    int x = 1;
    for (int i = 1; i <= power; i++) {
        x = x * base;
    } 
    printf("%d", x);
    return 0;
}
