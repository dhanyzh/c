//program to reverse an array
#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("Reverse element: %d\n", arr[i]);
    }
    return 0;
}