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
        printf("Enter your data\n");
        scanf("%d",&data);
        top++;
        stack[top] = data;
    }

    return;
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void display(){
    if (top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements: ");
        for(int i =0; i<=top; i++){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
    return;
}

void peek(){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top element: %d\n", stack[top]);
    }
}

int main(){
    insert();
    insert();
    insert();
    pop();
    pop();
    display();
    peek();
}