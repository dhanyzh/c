//WAP to swap two numbers without using a third variable. 
#include <stdio.h>
int main(){
int a,b;
printf("enter a digit:");
scanf("%d",&a);
printf("enter anotha digit:");
scanf("%d",&b);
a=a-b;
b=a+b;
a=b-a;
printf("a=%d,b=%d",a,b);


}