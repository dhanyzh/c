// total number of pairs in the array whose sum is equal to the given value x
#include <stdio.h>

int main()
{
    int totalpairs = 0;
    int num = 10;
    int arr[] = {1,2,3,4,5,6,7,8};
    for (int i = 0; i < 8; i++){
        for (int j = i + 1; j < 8; j++){
            if (arr[i] + arr[j] == num){
                totalpairs++;
            }
        }
    }
    printf("Total pairs with sum %d = %d", num, totalpairs);
    return 0;
}