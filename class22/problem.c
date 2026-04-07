// Problem: Create a struct type book with name,price ,number of pages
#include <stdio.h>
#include <string.h>
int main() {
    struct book {
        char name[100];
        int pages;
        int price;
    };
    struct book book1;
    strcpy(book1.name, "book1");
    book1.pages = 200;
    book1.price = 150;
    printf("Book Name: %s\n", book1.name);
    printf("Number of Pages: %d\n", book1.pages);
    printf("Price: %d\n", book1.price);
    return 0;
}
