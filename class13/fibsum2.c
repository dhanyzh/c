#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    int sum=0;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("enter a positive number");
        return 0;
    }
    printf("Fibonacci series:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        sum=sum+a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("\nsum=%d",sum);
    return 0;
}