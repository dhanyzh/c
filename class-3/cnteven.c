#include <stdio.h>
int main() {
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;        
        if (digit % 2 == 0) {  
            count++;
        }
        n = n / 10;           
    }
    printf("Number of even digits = %d", count);

    return 0;
}
