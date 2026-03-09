#include <stdio.h>

// Recursive function to find sum Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    int sum = 0;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(int i = 0; i < n; i++) {
        int fib = fibonacci(i);
        printf("%d ", fib);
        sum = sum + fib;
    }

    printf("\nSum of Fibonacci series is: %d\n", sum);

    return 0;
}