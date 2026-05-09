//given a que of integer and a number k, reverse only tgh efirst k element of the queue while keeping the remaining element in the same model
#include <stdio.h>

#define MAX 100

int main() {
    int queue[MAX];
    int stack[MAX];
    int n, k, i;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter queue elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &queue[i]);
    }

    printf("enter k: ");
    scanf("%d", &k);

    int top = -1;

    for(i = 0; i < k; i++) {
        top++;
        stack[top] = queue[i];
    }

    for(i = 0; i < k; i++) {
        queue[i] = stack[top];
        top--;
    }

    printf("result: ");
    for(i = 0; i < n; i++) {
        printf("%d ", queue[i]);
    }

    return 0;
}