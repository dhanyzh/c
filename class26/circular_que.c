#include <stdio.h>
#define MAXSIZE 4

int front = -1;
int rear = -1;
int queue[MAXSIZE];

void insert() {
    if ((rear + 1) % MAXSIZE == front) {
        printf("Queue Overflow\n");
    } else {
        int data;
        printf("Enter your data: ");
        scanf("%d", &data);

        if (front == -1) { 
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAXSIZE;
        }

        queue[rear] = data;
    }
}

void pop() {
    if (front == -1) {
        printf("Queue Underflow\n");
    } else {
        printf("Deleted element: %d\n", queue[front]);

        if (front == rear) { 
            front = rear = -1;
        } else {
            front = (front + 1) % MAXSIZE;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue Elements:\n");
        int i = front;
        while (1) {
            printf("%d\n", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % MAXSIZE;
        }
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
        printf("Front index: %d\n", front);
        printf("Rear index: %d\n", rear);
    }
}

int main() {
    int choice;
    do {
        printf("================Circular Queue================\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid Choice\n");
        }
    } while (choice != 5);

    return 0;
}