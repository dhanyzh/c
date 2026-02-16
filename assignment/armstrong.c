//Q1. What is an Armstrong number, and how do you check if a number is Armstrong in C?'
#include <stdio.h>
#include <math.h>
void checkArmstrong(int num) {
    int sum = 0, digits = 0;
    int temp;
    for(temp = num; temp > 0; temp /= 10)
        digits++;
    for(temp = num; temp > 0; temp /= 10)
        sum += pow(temp % 10, digits);

    if(sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}


