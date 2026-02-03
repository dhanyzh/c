#include <stdio.h>
int main()
{
    float a,volume;
    printf("enter a side of cube: ");
    scanf("%f",&a);
    volume=a*a*a;
    printf("volume of cube: %0.2f",volume);
    return 0;
}