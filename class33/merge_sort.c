#include <stdio.h>

void mergesort(int arr[], int lb, int mid, int ub);

void merge(int arr[], int lb, int ub){
    if(lb < ub){
        int mid = (lb + ub) / 2;

        merge(arr, lb, mid);
        merge(arr, mid + 1, ub);

        mergesort(arr, lb, mid, ub);
    }
}

void mergesort(int arr[], int lb, int mid, int ub){
    int i = lb;
    int j = mid + 1;
    int k = lb;

    int temp[100];

    while(i <= mid && j <= ub){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid){
        temp[k++] = arr[i++];
    }

    while(j <= ub){
        temp[k++] = arr[j++];
    }

    for(i = lb; i <= ub; i++){
        arr[i] = temp[i];
    }
}

int main(){

    int arr[] = {45, 12, 78, 34, 23, 9};
    int n = 6;

    printf("Before Sorting:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    merge(arr, 0, n - 1);

    printf("\nAfter Sorting:\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}