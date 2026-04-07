//find the total numbers of pair in the array whose sum is = to the given value x
#include <stdio.h>

int main()
{
    int arr[10], x, count = 0;

    printf("Enter 10 elements:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++)
    {
        for(int j = i + 1; j < 10; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                count++;
            }
        }
    }

    printf("Total pairs with sum %d = %d", x, count);

    return 0;
}