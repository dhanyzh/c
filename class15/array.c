// GIVEN AN ARRAY OF INTEGERS , CHSANGE THE VALUE OF ALL ODD INDEX ELEMENT TO ITS SECOND MULTIPLE INCREMENT ALL EVEN INDEX VALUE BY 10
#include <stdio.h>
int main()  
{
    int arr[5];
    for (int i = 0; i <=4; i++){
        printf("Enter the element %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <=4; i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i]*2;
        }
    }
    for (int i = 0; i <=4; i++){
        printf("\nthe new array is :%d",arr[i]);
    }
    return 0;
}