#include <stdio.h>
int main()
{
    int n, a, b, c, sum;
    printf("Armstrong numbers between 1 and 500 are:\n");
    for (n = 1; n <= 500; n++) {
        a = n / 100;
        b = (n / 10) % 10;
        c = n % 10;        
        sum = a*a*a + b*b*b + c*c*c;
        if (sum == n) {
            printf("%d\n", n);
        }
    }
    return 0;
}
