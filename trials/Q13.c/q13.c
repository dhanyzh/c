// Q13. WAP to print table of number (program should be dynamic so if you give 5 it should
// print table of 5) 
#include <stdio.h>
int table(int num){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);   
    table(num);
}