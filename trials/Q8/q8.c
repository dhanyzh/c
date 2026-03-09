//WAP to check even odd of a number. 
#include <stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num==0){
        printf("%d is zero",num);
    }
    else if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}