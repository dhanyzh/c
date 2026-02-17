//Q2. How do you check if a number is an Automorphic number in C?
#include <stdio.h>
int automorphic(int num){
    int sq = num * num;   // Find square of the number
    int temp = num;       // Store original number in temp
    while (temp > 0){
        int digit = temp % 10;     // Get last digit of original number
        int sq_digit = sq % 10;    // Get last digit of square

        // If digits are not equal it is not Automorphic
        if (digit != sq_digit){     
            printf("The number %d is not an Automorphic number", num);
            return 0;              // Stop function
        }
        temp = temp / 10;  // Remove last digit from original number
        sq = sq / 10;      // Remove last digit from square
    }
    printf("The number %d is an Automorphic number", num);
    return 0;
}
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);   // Take input from user
    automorphic(num);    // Call function
    return 0;           
}
