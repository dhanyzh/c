#include <stdio.h>
int main(){
    int choice;
        do{
        printf("======================================\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("======================================\n");
        printf("enter your choice(1 to 4):");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("you have chosen to add two numbers\n");
            // Add file writing logic here
            break;
        case 2:
            printf("you have chosen to subtract two numbers\n");
            // Add file reading logic here
            break;
        case 3:
            printf("you have chosen to multiply two numbers\n");
            // Add file appending logic here
            break;
        case 4:
            printf("you have chosen to divide two numbers\n");
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    } while (choice < 5);
    return 0;
}