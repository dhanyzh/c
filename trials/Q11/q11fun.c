// Q11. WAP to find Largest of three number take input from user. 
#include <stdio.h>
int largest(int num1, int num2, int num3){ 
 
    if (num1>=num2 && num1>=num3){
        printf("%d is the largest number",num1);
    }
    else if(num2>=num1 && num2>=num3){
        printf("%d is the largest number",num2);
    }
    else{
        printf("%d is the largest number",num3);
    }
}
int main(){ 
    int num1,num2,num3;
    printf("enter number a:");
    scanf("%d",&num1);
    printf("enter number b:");
    scanf("%d",&num2);
    printf("enter number c:");
    scanf("%d",&num3);
    largest(num1,num2,num3);
}