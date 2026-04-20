//create a structure called date, that contains three members namely , date, month and year.
//create two structures variable with different dates and now compare the two.
// if the dates are equal then display a message equal otherwise unequal.

#include <stdio.h>
#include <string.h>
int main(){
    struct date {
        int date;
        int month;
        int year;
    }d1,d2;
    d1.date = 12;
    d1.month = 5;
    d1.year = 2026;

    d2.date = 12;
    d2.month = 5;
    d2.year = 2026;

    if(d1.date == d2.date && d1.month == d2.month && d1.year == d2.year){
        printf("the dates are equal\n");
    }
    else{
        printf("the dates are unequal\n");
    }
    return 0;


}