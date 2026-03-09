// Q15. WAP to find the sum of even and odd number between 1 to 100. 
#include <stdio.h>
int main(){ 
    int even_sum=0, odd_sum=0;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            even_sum+=i;
        }
        else{
            odd_sum+=i;
        }
    }
    printf("The sum of even numbers between 1 and 100 is: %d\n",even_sum);
    printf("The sum of odd numbers between 1 and 100 is: %d",odd_sum);
}