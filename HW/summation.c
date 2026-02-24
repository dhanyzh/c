#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nSum = %d", sum);
    return 0;
}