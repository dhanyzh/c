#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float root1, root2, realpart, imaginarypart;
    float discriminant;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if a is zero
    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);

        printf("Roots are real and equal\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        realpart = -b / (2*a);
        imaginarypart = sqrt(-discriminant) / (2*a);

        printf("Roots are complex and imaginary\n");
        printf("Root1 = %.2f + %.2fi\n", realpart, imaginarypart);
        printf("Root2 = %.2f - %.2fi\n", realpart, imaginarypart);
    }

    return 0;
}
