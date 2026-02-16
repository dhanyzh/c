//Q2. How do you check if a number is an Automorphic number in C?
#include <stdio.h>
void checkAutomorphic(int num) {
    int square = num * num, pow10 = 1;
    for(int temp = num; temp > 0; temp /= 10)
        pow10 *= 10;
    if(square % pow10 == num)
        printf("%d is an Automorphic number\n", num);
    else
        printf("%d is NOT an Automorphic number\n", num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkAutomorphic(num);
    return 0;
}
