// Q14. Print all even and odd number between 1 to 100
#include <stdio.h>
int main(){
    printf("Even numbers between 1 and 100 are:\n");
    for(int i=1;i<=100;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("\nOdd numbers between 1 and 100 are:\n");
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d ",i);
        }
    }
}