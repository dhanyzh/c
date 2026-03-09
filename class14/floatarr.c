// write a program that accept 10 floating point numbers from user to array. calculate the avg of this number
#include <stdio.h>
int main()
{
    float arr[10];
    float sum = 0;
    float avg;
    for (int i = 0;i < 10;i++ ){
        printf("enter the elements %0.2f :",i+1);
        
        scanf("%f",&arr[i]);
    }
    for (int i = 0;i < 10;i++){
        sum = sum + arr[i];
    }
    avg = sum/10;   
    printf("average of number: %.2f",avg);
    return 0 ;
}