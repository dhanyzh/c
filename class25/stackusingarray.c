#include<stdio.h>
#define MAXSIZE 3
int stack[MAXSIZE];
int top = -1;
void insert(){
    if(top == MAXSIZE -1){
        printf("Stack Overflow\n");
    }
    else{
        int data;
        printf("Enter your data");
        scanf("%d",&data);
        top++;
        stack[top] = data;
    }

    return;
}

void pop(){
    return;
}

void display(){
    if (top == -1){
        printf("Stack is empty\n");
    }
    for(int i =0; i<top; i++){
        printf("%d",stack[i]);
    }
    return;
}

int main(){
    
    int choice;
    do{
    printf("================Stack================\n");
    printf("1. Insert\n  2.Delete\n  3.Display\n");
    printf("Enter the Choice:");
    scanf("%d\n", &choice);


switch(choice){
    case 1 : insert();
             break;
    case 2 : pop();
             break;
    case 3 : display();
             break;
    default : printf("Invalid Choice");
}
    }while(choice != 4);
    return 0;
}