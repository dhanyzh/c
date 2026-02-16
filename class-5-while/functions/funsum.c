#include <stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int reslt = sum(5,7);
    printf("the sum is: %d",reslt);
    return 0;
}