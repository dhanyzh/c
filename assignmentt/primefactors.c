//Q6. How do you find all prime factors of a number in C?
#include <stdio.h>
int prime(int num){
    // First check for factor 2 
    while(num % 2 == 0){                
        printf("2 ");
        num = num / 2;     // Divide number by 2
    }
    for (int i = 3; i <= num; i = i + 2){   
        while(num % i == 0){
            printf("%d ", i);   // Print the prime factor
            num = num / i;     // Divide number by i
        }
    }
    return 0;   
}

int main(){
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);   // Take input
     prime(num); 
return 0;
}