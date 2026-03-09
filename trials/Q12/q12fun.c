#include <stdio.h>
int numbervalue(int num){
   
    if(num>0){
        printf("%d is positive",num);
    }
    else if(num<0){
        printf("%d is negative",num);
    }
    else{
        printf("%d is zero",num);
    }
}
int main(){
     int num;
    printf("enter a number:");
    scanf("%d",&num);
    numbervalue(num);
}