#include <stdio.h>
int main(){
    FILE * ptr = fopen("dhanish.txt", "w");
    char str[10];
    while (fgets(str, 10, ptr) != NULL){
        printf("%s", str);
    }
    if (fgets(str, 10, ptr) == NULL){
        printf("End of file reached");
    }
    fclose(ptr);


}