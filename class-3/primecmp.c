#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Neither prime nor composite");
    } else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count == 2)
            printf("Prime number");
        else
            printf("Composite number");
    }
    return 0;
}
