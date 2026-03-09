

#include <stdio.h>
#include <math.h>

int quadratic(float a, float b, float c) {
    float D, root1, root2; 


        
   
    D = (b * b) - (4 * a * c);

    if (D > 0) {
       
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("The roots are real and different.\n");
        printf("Root 1 = %.2f, Root 2 = %.2f", root1, root2);
    } 
    else if (D == 0) {
   
        root1 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("The root is %.2f", root1);
    } 
    else {
       
        printf("The roots are imaginary (complex).\n");
    }

    return 0;
}
int main() {
    float a, b, c; 

   printf("enter a:");
    scanf("%f", &a);
    printf("enter b:");
    scanf("%f", &b);
    printf("enter c:");
    scanf("%f", &c);
        
   
    quadratic(a, b, c);

    return 0;
}