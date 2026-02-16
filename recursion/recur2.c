#include <stdio.h>
void number(int n)
{
    if(n > 10)
        return;

    printf("%d ", n);
    number(n + 1);
}
int main()
{
    number(1);
    return 0;
}