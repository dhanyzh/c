#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the number;");
    scanf("%d",&n);
    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n",i,n,n*i);
    }
    return 0;
}
