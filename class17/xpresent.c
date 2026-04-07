// write a program if the number is present in the array or not
#include <stdio.h>
int main() {
    int a[5] = {1,5,3,4,2};
    int num = 15;
    int found = 0;
    for(int i = 0; i < 5; i++) {
        if(a[i] == num) {
            printf("Number is present in the array.\n");
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Number is not present in the array.\n");
    }
    return 0;
}