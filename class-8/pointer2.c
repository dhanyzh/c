#include <stdio.h>
int main()
{
    int a = 5;
    int b = 5;

    int* x =&a;

    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",x);
    return 0;
    
}