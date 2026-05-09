//swap,for,if else
#include <stdio.h>
void selection_sort (int arr[], int n){
    int i, j, k;
    for(i=0; i<n-1; i++){
        for (j=k=1; j<n; j++){
            if(arr[j] < arr[k]){
                k = j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
}
int main(){
    int arr[] = {5, 2, 8, 1, 9,3};
    selection_sort(arr, 6);
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}