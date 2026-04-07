#include <stdio.h>
#include <string.h>
int main() 
{
    char message[] = "hello";
    char message2[50];
    strcpy(message2, message);
    puts(message2);
    return 0;
}