#include <stdio.h>
int main() {
    char str[] = "helloworld";
    str[5] = '\0';
    printf("%s", str);
    return 0;
}