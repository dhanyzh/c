// Q17. WAP to find Factorial of a Number 
#include <stdio.h>
int main(){
    int num,fact=1;
    printf("enter a number:");
    scanf("%d",&num);
    if (num == 0) {
        printf("The factorial of %d is 1", num);
   
    } else {
        for(int i=1;i<=num;i++){
            fact*=i;
        }
        printf("The factorial of %d is %d", num, fact);
    }

}
