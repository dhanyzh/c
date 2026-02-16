// Q6. How do you find all prime factors of a number in C? 
#include <stdio.h>
void primeFactors(int num) {
    printf("Prime factors: ");
    for(; num % 2 == 0; num /= 2)
        printf("2 ");
    for(int i = 3; i*i <= num; i += 2)
        for(; num % i == 0; num /= i)
            printf("%d ", i);
    if(num > 2)
        printf("%d", num);

    printf("\n");
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    primeFactors(num);
    return 0;
}
