// Q3. What is a Perfect Number? Write a C program to check for a perfect number. 
#include <stdio.h>
void perfectnumber(int num) {
    int sum = 0;
    for(int i = 1; i <= num/2; i++)
        if(num % i == 0)
            sum += i;
    if(sum == num)
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is NOT a Perfect number\n", num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    perfectnumber(num);
    return 0;
}

