//binary_search
#include <stdio.h>
int binary_search(int arr[], int lb, int ub, int target){
    while(lb <= ub){
        int mid = (lb + ub) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            lb = mid + 1;
        }
        else{
            ub = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = binary_search(arr, 0, n - 1, target);

    if(result != -1){
        printf("Element found at index: %d\n", result);
    }
    else{
        printf("Element not found in the array.\n");
    }

    return 0;
}