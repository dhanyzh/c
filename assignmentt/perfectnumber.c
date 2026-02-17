//Q3.What is a Perfect Number? Write a C program to check for a perfect number. 
#include <stdio.h>
int perfect(int num){
    int sum = 0;   // To store sum of factors
    for (int i = 1; i <= num/2; i++){
        if (num % i == 0){      // Check if i is a divisor
            sum += i;           // Add i to sum
        }
    }
    // Check if sum of divisors equals the number
    if (sum == num){                    
        printf("The number %d is a Perfect number", num);
    }
    else{
        printf("The number %d is not a Perfect number", num);
    }
    return 0;
}
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);  //input takesn
    perfect(num);        // Call function
    return 0;            
}
