#include <stdio.h>
#include <string.h>
int main() {
    char name [] = "hello world";
    printf("%s", name);
    name[0] = 'Y'; //cannot change the entire string instead we can change the individual character of the string
    printf("\n%s", name);
    return 0;
}