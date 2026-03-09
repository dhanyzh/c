#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <=4; i++){
    printf("Enter the the first element %d : ", i);
    scanf("%d", &arr[i]);
    }
printf("%d\n", arr[2]);
    return 0;
}
