#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer {
        int runs;
        float avg;
        float sr;
    } cricketer;
    cricketer vkholi;
    vkholi.runs = 12000;
    vkholi.avg = 58.16;
    vkholi.sr = 130.5;

    cricketer msdhoni;
    msdhoni = vkholi; //deep copy
    msdhoni.runs = 10000;
    printf("ms dhoni runs: %d\n", msdhoni.runs);
    printf("virat kohli runs: %d\n", vkholi.runs);
    return 0;
}