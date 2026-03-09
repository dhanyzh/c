#include <stdio.h>
int main(){
    int num1,num2;
     printf("enter digit 1:");
    scanf("%d",&num1);
    printf("enter digit 2:");
    scanf("%d",&num2);
    int sum=num1+num2;
    int difference=num1-num2;
    int product=num1*num2;
    int quotient=num1/num2;
    int reminder=num1%num2;
    printf("sum=%d\n",sum);
    printf("differnece=%d\n",difference);
    printf("product=%d\n",product);
    printf("division=%d\n",quotient);
    printf("reminder=%d\n",reminder);


}