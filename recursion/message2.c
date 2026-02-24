#include <stdio.h>

void greet(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hello\n");
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    greet(n);
    return 0;
}