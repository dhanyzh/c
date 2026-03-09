//WAP to swap two numbers using a third variable. 
#include <stdio.h>
int main(){
    int a,b,temp=0;
    printf("enter digit 1:");
    scanf("%d",&a);
    printf("enter digit 2:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);
}