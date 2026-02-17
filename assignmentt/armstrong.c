//Q1. What is an Armstrong number, and how do you check if a number is Armstrong in C?
#include <stdio.h>
int armstrong(int num){
    int digit = 0;      // To store each digit
    int sum = 0;        // To store sum of cubes of digits
    int number = num;   // Copy of original number 
    while(number > 0){
        digit = number % 10;                 // Get last digit
        sum = sum + (digit * digit * digit); // Add cube of digit to sum
        number = number / 10;                // Remove last digit
    }
    if (sum == num){                                       
        printf("The number %d is an Armstrong number", num);
    }
    else{
        printf("The number %d is not an Armstrong number", num);
    }
}
int main(){
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);      // Take input from user

    armstrong(num);         // Call function to check Armstrong

    return 0;               
}
