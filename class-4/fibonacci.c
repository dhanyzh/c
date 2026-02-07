#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("enter a positive number");
        return 0;
    }
    printf("Fibonacci series:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
