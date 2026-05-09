#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *add;
};
struct node *start = NULL, *temp,*new1,*prev,*next;

void create(){
start = (struct node *)malloc(sizeof(struct node)); //usually malloc gives voide data as result but we do this to convert it into struct node
int x;
char ch;
printf("enter the value:");
scanf("%d",&x);
start->data = x;
start->add = NULL;
temp = start;
printf("Node is created!\n");
printf("Do you want to continue?: ");
scanf(" %c",&ch);
while(ch == 'Y' || ch == 'y'){
    printf("enter the element: ");
    scanf("%d",&x);
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = x;
    new1->add = NULL;
    temp->add =new1;
    temp = new1;
    printf("new node created!");
    printf("Do you want to continue?: ");
    scanf(" %c",&ch);
}
return;
}

void insert_at_first(){
    if(start == NULL){
        printf("Linked list is empty\n");
    }
    else{
        create();
        new1->add = start;
        start=new1;
        printf("Node is inserted at the first");
    }
    return;
}

void insert_at_last(){
    if(start == NULL){
        printf("Linked list is empty");
    }
    else{
        create();
        while(temp->add != NULL){
            temp = temp->add;
        }
        temp->add = new1;
        printf("Node is inserted at last\n");
    }
}

void insert_at_middle(){
    if(start == NULL){
        printf("Linked list is empty");
    }
    else{
         create();
        int pos,i=1;
        printf("Enter the position to add new node: ");
        scanf("%d",&pos);
        next = start;
        while(i<pos){
            prev= next;
            next= next->add;
            i++;
        }
        prev->add = new1;
        new1->add = next;
        printf("Node inserted at position %d\n", pos);
    }
}

void delete_at_first(){
    if (start == NULL){
        printf("Linked list is empty");
    }
    else{
        temp = start;
        start = start->add;
        free(temp);
        printf("Node deleted at first\n");
    }
    
}

void delete_at_last(){
    if (start == NULL){
        printf("Linked list is empty");
    }
    else{
        temp = start;
        while(temp->add != NULL){
            prev = temp;
            temp = temp->add;
        }
        prev->add = NULL;
        free(temp);
        printf("Node deleted at last\n");
    }
}

void delete_at_middle(){
    if (start == NULL){
        printf("Linked list is empty");
    }
    else{
        int pos,i=1;
        printf("Enter the position to delete node: ");
        scanf("%d",&pos);
        next = start;
        while(i<pos){
            prev = next;
            next = next->add;
            i++;
        }
        prev->add = next->add;
        free(next);
        printf("Node deleted at position %d\n", pos);
    }
    
}

void display(){
    
}


int main(){
    int choice;
    printf("===============SLL===============");
    printf("1.Create\n 2.Insert at start\n 3.Insert at last\n 4.Insert at middle\n 5.Delete at start\n 6.Delete at last\n 7.Delete at middle\n 8.Display\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: create(); break;
        case 2: insert_at_first(); break;
        case 3: insert_at_last(); break;
        case 4: insert_at_middle; break;
        case 5: delete_at_first(); break;
        case 6: delete_at_last(); break;
        case 7: delete_at_middle(); break;
        case 8: display(); break;
    }
}