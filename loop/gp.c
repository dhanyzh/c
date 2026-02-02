#include <stdio.h>

int main() {
    int a, r, n;
    int term;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common ratio (r): ");
    scanf("%d", &r);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    term = a;

    for (int i = 1; i <= n; i++) {
        printf("%d\n", term);
        term = term * r;
    }

    return 0;
}
