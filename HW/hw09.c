//count the number of elemts in given array greater than a give number x
#include <stdio.h>

int main() {
    int arr[10], x;
    int count = 0;

    printf("Enter elements :\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to compare (x): ");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++) {
        if(arr[i] > x) {
            count++;
        }
    }

    printf("Number of elements greater than %d is: %d", x, count);

    return 0;
}