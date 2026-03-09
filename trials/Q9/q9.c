// WAP to check prime number. 
#include <stdio.h>
int main(){
    int num;
    printf("enter a digit:");
    scanf("%d",&num);
    if (num==2){
        printf("%d is prime",num);
    }
    else{
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            printf("%d is not prime",num);
        }
        else{
            printf("%d  is prime",num);
        }
    }
    }

}