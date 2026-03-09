//Q1. Take Two integer Input from user num1 and num2 and display with message
//1. Sum of two number
//2. Product of two number
//3. Difference of two number
//4. Division of Two number
//5. Modulo of two number 

#include <stdio.h>
int main(){
    int a,b;
    printf("enter digit 1:");
    scanf("%d",&a);
    printf("enter digit 2:");
    scanf("%d",&b);
    printf("the sum of %d+%d is %d\n",a,b,a+b);
    printf("the product of %dx%d is %d\n",a,b,a*b);
    printf("the difference of %d-%d is %d\n",a,b,a-b);
    printf("the quotient of %d/%d is %d\n",a,b,a/b);
    printf("the reminder of %d/%d is %d\n",a,b,a%b);
}