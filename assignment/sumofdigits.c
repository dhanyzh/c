//Q5.How do you find the sum of the digits of a number in C? 
#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    for(int temp = num; temp > 0; temp /= 10)
        sum += temp % 10;
    return sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits is %d\n", sumOfDigits(num));
    return 0;
}
