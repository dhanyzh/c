#include <stdio.h>
int evenodd( int num){
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
int main(){
    int a;
    printf("enter a digit:");
    scanf("%d",&a);
    evenodd(a);
}