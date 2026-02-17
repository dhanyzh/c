//Q4. How do you find the Greatest Common Divisor (GCD) of two numbers in C?
#include <stdio.h>
int gcd(int a, int b){
    int temp1 = a;   // Store original value of a 
    int temp2 = b;   // Store original value of b
    while (b != 0){   
        int temp = b;     // Store b temporarily
        b = a % b;        // Find remainder
        a = temp;         // Replace a with previous b
    }
    printf("The GCD of %d and %d = %d", temp1, temp2, a);
    return 0;
}
int main(){
    int a, b;

    printf("Enter the value of a and b respectively: ");
    scanf("%d%d", &a, &b);   // Take two inputs

    gcd(a, b);               // Call function

    return 0;
}             
