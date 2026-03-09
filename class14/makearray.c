//make array which stores 7 integers and display the value
#include <stdio.h>
int main()
{
    int arr[7];
    for (int i=0;i< 7;i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i< 7;i++){
        printf("%d\n",arr[i]);
    }
    return 0 ;
}
