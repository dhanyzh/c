//Q4. Find the volume of sphere. (4/3*pi*r*r*r)
#include <stdio.h>
int main(){
    int r;   // we can also take radius as a float value "float r"
    printf("enter the radius of the circle:");
    scanf("%d",&r); 
    float volume=(4.0/3.0)*3.14*(r*r*r);
    printf("the volume of the sphere is=%f",volume);
}

