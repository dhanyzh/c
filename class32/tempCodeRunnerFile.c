// pivot sort 
#include <stdio.h>
void pivot_sort(int arr[], int n){
    int pivot = arr[n-1];
    int i = -1;
    for(int j=0; j<n-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[n-1]);
}
int main(){
    int arr[] = {7, 6, 10, 5, 9, 2, 1, 15, 7};
    pivot_sort(arr, 7);
    for(int i=0; i<7; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}