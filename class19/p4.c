#include <stdio.h>
int main() {
    char str[] = "computer science";
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d", length);
    return 0;

}