//employee struct
#include <stdio.h>
int main() {
    struct employee {
        int id ;
        char gender ;
        char level ;
        char name[50] ;

    };
    struct employee emp1 ;
    emp1.id = 101 ;
    emp1.gender = 'M' ;
    emp1.level = 'A' ;
    strcpy(emp1.name, "sulu");
    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Gender: %c\n", emp1.gender);
    printf("Employee Level: %c\n", emp1.level);
    printf("Employee Name: %s\n", emp1.name);
    return 0;
}