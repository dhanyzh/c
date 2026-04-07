// print thr reverse of numbers in selected area in an array
#include <stdio.h>
int main() {
    int a[10], start, end;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the starting index: ");
    scanf("%d", &start);
    printf("Enter the ending index: ");
    scanf("%d", &end);
    
    printf("Reverse of the selected area:\n");
    for (int i = end; i >= start; i--) {
        printf("%d ", a[i]);
    }
    
    return 0;
}