#include <stdio.h>
#define MAXSIZE 4
int front =0;
int rear =-1;
queue[MAXSIZE];

void insert(){
    if(rear == MAXSIZE-1){
        printf("Queue Overflow");
    }
    else{
        int data;
        printf("Enter your data: ");
        scanf("%d",&data);
        rear++;
        queue[rear]= data;
    }
}

void pop(){
    if(front>rear){
        printf("Queue Empty");
    }
    else{
        printf("Deleted element: %d\n",queue[front]);
    }
}

void display(){
    if(rear == -1){
        printf("Queue is Empty");
    }
    else{
        printf("Queue Elements:\n");
        for(int i=rear; i>=front; i--){
            printf("%d\n",queue[i]);
        }
    }
}

void peek(){
    printf("Position of front: %d\n",front);
    printf("The position of rear: %d\n",rear);
}

int main(){
     int choice;
    do{
    printf("================Stack================\n");
    printf("1. Insert\n2. Delete\n3. Display\n4. Peek\n5. Exit\n");
    printf("Enter the Choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1 : insert();
             break;
    case 2 : pop();
             break;
    case 3 : display();
             break;
    case 4 : peek();
             break;
    case 5 : printf("Exiting...\n");
             break;
    default : printf("Invalid Choice\n");
}
    }while(choice != 5);
    return 0;
}