#include <stdio.h>
int main()
{
    int num,total=1;
    printf("entr an input:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    total=total*i;
    printf("the factorial is %d",total);
    return 0;
}