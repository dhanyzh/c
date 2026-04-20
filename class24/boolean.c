//create a structure called date, that contains three members namely , date, month and year.
//create two structures variable with different dates and now compare the two.
// if the dates are equal then display a message equal otherwise unequal.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
     typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date d1, d2;
    d1.day =8;
    d1.month =06;
    d1.year = 2026;

    d2.day =8;
    d2.month =06;
    d2.year = 2026;

    bool flag = true;
    
    if(d1.day != d2.day){
        flag = false;
    }
    if(d1.month != d2.month){
        flag = false;
    }
    if(d1.year != d2.year){
        flag = false;  
    }

    if(flag == true){
        printf("The dates are equal");
    }
    else{
        printf("The dates are not equal");
    }
    return 0;

}