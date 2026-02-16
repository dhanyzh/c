# include <stdio.h>
void add(int a,int b){
    int sum=a+b;
    printf("sum=%d\n",sum);
    return;
}
void multiply(int a,int b){
    int product=a*b;
    add(a,b);
    printf("product=%d\n",product);
    return;
}
int main(){
    int a,b;
    printf("enter digit1:");
    scanf("%d",&a);
    printf("enter digit2:");
    scanf("%d",&b);
    printf("welcome to math functions\n");
    
    multiply(a,b);
    return 0;
}