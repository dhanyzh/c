#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[50];
    printf("enter the input: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1, "\n")] = '\0';
    for (int i = 0; str1    [i] != '\0'; i++) {
        str2[i] = str1[i];
    }
    str2[strcspn(str2, "\n")] = '\0';
    printf("copied string: %s\n", str2);
    return 0;
}