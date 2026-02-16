#include <stdio.h>
int main()
{
    int y = 10;
    printf("%d\n",y);
    int* a=&y;
    printf("%p\n",a);
    *a=20;
    printf("%d\n",y);

    
    return 0;

}