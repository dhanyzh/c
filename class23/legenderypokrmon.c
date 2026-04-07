#include <stdio.h>
#include <string.h>
int main() {
    typedef struct pokemon {
        int hp ;
        int attack ;
        char tier;
        int speed ;
        char name[20] ;
    } pokemon;

    typedef struct legendarypokemon {
        int specialattack ;
    pokemon normal;
    } legendarypokemon;
    legendarypokemon mewtwo ;
    mewtwo.specialattack = 200 ;
    mewtwo.normal.hp = 300 ;
    mewtwo.normal.attack = 250 ;
    mewtwo.normal.tier = 'S' ;
    mewtwo.normal.speed = 150 ;
    strcpy(mewtwo.normal.name, "Mewtwo");
    typedef struct godpokemon {
        int divinepower ;
    legendarypokemon legendary;
    } godpokemon;
        godpokemon arceus ;
    arceus.divinepower = 500 ;
    arceus.legendary.specialattack = 300 ;
    arceus.legendary.normal.hp = 400 ;
    arceus.legendary.normal.attack = 350 ;
    arceus.legendary.normal.tier = 'X' ;
    arceus.legendary.normal.speed = 200 ;
    strcpy(arceus.legendary.normal.name, "Arceus");
    printf("Name: %s\n", mewtwo.normal.name);
    printf("Special Attack: %d\n", mewtwo.specialattack);
    printf("HP: %d\n", mewtwo.normal.hp);
    printf("Attack: %d\n", mewtwo.normal.attack);
    printf("Tier: %c\n", mewtwo.normal.tier);
    printf("Speed: %d\n\n", mewtwo.normal.speed);
    printf("Name: %s\n", arceus.legendary.normal.name);
    printf("Divine Power: %d\n", arceus.divinepower);
    printf("Special Attack: %d\n", arceus.legendary.specialattack);
    printf("HP: %d\n", arceus.legendary.normal.hp);
    printf("Attack: %d\n", arceus.legendary.normal.attack);
    printf("Tier: %c\n", arceus.legendary.normal.tier);
    printf("Speed: %d\n\n", arceus.legendary.normal.speed);
    return 0;
}