#include <stdio.h>

int fact(int n){
    int total = 1;
    for(int i = 2; i <= n; i++){
        total *= i;
    }
    return total;
}

int combination(int n, int r){
    return fact(n) / (fact(r) * fact(n - r));
}

int main(){
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            int iCj = combination(i, j);
            printf("%d ", iCj);
        }
        printf("\n");
    }

    return 0;
}