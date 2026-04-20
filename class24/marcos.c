#include <stdio.h>
int main(){
    #define pi 3.14159
    #define area(r) (pi * r * r)
    printf("area of circle with radius 5 is %f", area(5));
    return 0;
}
