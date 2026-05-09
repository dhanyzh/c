#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *add;
};
struct node *start = NULL, *temp, *new1;

void  create(){
    
struct node{
    int data;
    struct node *add;       
};
struct node *start = NULL,*temp,*new1;
start = (struct node*)malloc(sizeof(struct node));
    int x;
    char choice;
    printf("enter a number:");
    scanf("%d",&x);
    start-> data =x;
    start-> add=NULL;
    temp = start;
    while (choice=='y'||choice=='Y'){
        printf("enter a number:");
        scanf("%d",&x);
        new1 = (struct node*)malloc(sizeof(struct node));
        new1->data = x;
        new1->add = NULL;
        temp->add = new1;
        temp = new1;
        printf("do you to add more elements??:");
        scanf(" %c",&choice);
    }
    printf("node is created");
    printf("do you want to continue??:");
    scanf(" %c",&choice);
    if (choice=='y'||choice=='Y'){
        
    }    
}
void insert_at_start(){
    if (start==NULL){
        printf("list is empty");
    }
    else{
        create();
    }
}
void insert_at_last(){

}
void insert_at_middle(){

}
void delete_at_first(){

}
void delete_at_last(){

}
void delete_at_middle(){

}
void display(){

}
int main(){
    int choice;
    printf("++++++++++++++++SLL++++++++++++++++++++++\n");
    printf("1.create \n 2.insert_at_start\n 3.insert_at_last\n 4.insert_at_middle\n 5.delete_at_first\n 6.delete_at_last\n 7.delete_at_middle\n 8.display\n");
    

    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1: create();
            break;
        case 2:insert_at_start();
                break;
        case 3:insert_at_last();
                break;
        case 4:insert_at_middle();
                break;
        case 5:delete_at_first();
                break;
        case 6:delete_at_last();
                break;
        case 7:delete_at_middle();
                break;
        case 8:display();
                break;
        default:printf("invalid choice");
    }
    }