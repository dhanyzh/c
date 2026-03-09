//Q2. Take input age as int, height as float, grade as char and display with message so you
//beƩer get idea of data types.
#include <stdio.h>
int main(){
    int age;
    float height;
    char grade;
    printf("enterr your age:");
    scanf("%d",&age);
    printf("enter your height in cm:");
    scanf("%f",&height);
    printf("enter your grade:");
    scanf(" %c",&grade);
    printf("you are %d years old\n you are %f cm tall\n you have %c grade",age,height,grade);
}