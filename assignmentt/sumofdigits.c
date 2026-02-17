//Q5.How do you find the sum of the digits of a number in C? 
#include <stdio.h>
int sumofdigit(int num){
    int digit = 0;
    int sum = 0;

    while (num > 0){
        digit = num % 10;   // extract last digit
        sum += digit;       // add to sum
        num /= 10;          // remove last digit
    }
    return sum;  // return the sum instead of 0
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The sum of digits is: %d\n", sumofdigit(number));
    return 0;
}