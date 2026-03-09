//power using recursion
#include <stdio.h>
int power(int a, int b) {
    if (b == 0)
    return 1;  
    return a * power(a, b- 1); 
}
int main() {
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);
    int result = power(a, b);
    printf("%d raised to the power of %d is %d\n", a, b, result);
    return 0;
}