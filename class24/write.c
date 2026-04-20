#include <stdio.h>
int main(){
    FILE *fptr= fopen("ramesh.txt", "w");
    char str[] = "Hope everyone gets a good job while i gonna have my own company";
    fputs(str, fptr);
    fclose(fptr);
}