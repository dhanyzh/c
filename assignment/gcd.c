//Q4. How do you find the Greatest Common Divisor (GCD) of two numbers in C?
#include <stdio.h>
int gcd(int a, int b) {
    for(; b != 0; ) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD is %d\n", gcd(num1, num2));
    return 0;
}
