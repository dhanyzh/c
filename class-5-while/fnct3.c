#include <stdio.h>
void India(){
    printf("india is my country \n");
}
void england(){
    printf("england is a beautiful country \n");
    India();
}
void australia(){
    printf("kangaroos are found here\n");
    england();
}
int main() {
    australia();
    return 0;
}