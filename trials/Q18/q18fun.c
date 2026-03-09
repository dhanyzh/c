  #include <stdio.h>
  int factorial(int num){
    int fact=1;
  if (num == 0) {
        printf("The factorial of %d is 1", num);
   
    } else {
        for(int i=1;i<=num;i++){
            fact*=i;
        }
        printf("The factorial of %d is %d", num, fact);
    }

}
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a); 
    factorial(a);

}
