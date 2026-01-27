#include <stdio.h>
int main()
{
    int a ;
    printf("enter a number: ");
    scanf("%d", &a);
    if (a % 5 ==0)
{
        printf("the number %d devisible by 5\n",a);
}
    else
{
        printf("the number %d tnot devisible by 5\n",a);
}
    return 0;
}
