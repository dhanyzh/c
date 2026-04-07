#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "hello world";
    char str2[50] = "hello world";
    // printf("%p\n", str1);
    // printf("%p\n", str2); 
    strcpy(str2, str1);
    printf("copied string: %s\n", str2);
    return 0;
}