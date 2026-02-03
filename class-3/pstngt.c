#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if (a>0){
        printf("positive number");
    }
    else if (a==0)
    {
         printf("the number is 0");
    }
    else
    {
        printf("negative number");
    }
    return 0;
}
