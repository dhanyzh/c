#include <stdio.h>
int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}
int sum(int n)
{
    if(n == 0)
        return 0;
    return fib(n-1) + sum(n-1);
}
int main()
{
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\nSum of Fibonacci series = %d", sum(n));
    return 0;
}