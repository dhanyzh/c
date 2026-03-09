//Q3. Find area of circle and handle data type of variable carefully. 
#include <stdio.h>
int main(){
    int r;   // we can also take radius as a float value "float r"
    printf("enter the radius of the circle:");
    scanf("%d",&r);     //if radius is taken as a floating value instead of %d give %f we can still input integer value without  floating parts and still get the output as float
    float area=3.14*(r*r);
    printf("area=%f",area);

}
