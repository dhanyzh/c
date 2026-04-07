#include <stdio.h>
#include <string.h>
int main() {
    typedef struct pokemon {
        int hp ;
        int attack ;
        char tier;
        int speed ;
        char name[20] ;
    } Pokemon;
    Pokemon pikachu[3];
    pikachu[0].hp = 100;
    pikachu[0].attack = 80 ;
    pikachu[0].tier = 'A' ;
    pikachu[0].speed = 99;  
    strcpy(pikachu[0].name, "ramesh");

    pikachu[1].hp = 150;
    pikachu[1].attack = 120 ;
    pikachu[1].tier = 'S' ;
    pikachu[1].speed = 80 ;
    strcpy(pikachu[1].name, "siyam");

    pikachu[2].hp = 80;
    pikachu[2].attack = 70 ;
    pikachu[2].tier = 'B' ;
    pikachu[2].speed = 90 ;
    strcpy(pikachu[2].name, "sufail");
    
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\n", pikachu[i].name);
        printf("HP: %d\n", pikachu[i].hp);
        printf("Attack: %d\n", pikachu[i].attack);
        printf("Tier: %c\n", pikachu[i].tier);
        printf("Speed: %d\n\n", pikachu[i].speed);
    }
    return 0;
}