#include <stdio.h>
#include <string.h>

struct pokemon {
    int hp ;
    int attack ;
    char tier;
    int speed ;
    char name[50] ;
};

int main() {
    struct pokemon pikachu ; //.declaring a variable of type struct pokemon
    pikachu.hp = 100;  
    pikachu.attack = 80 ;
    pikachu.tier = 'A' ;
    pikachu.speed = 99;
    strcpy(pikachu.name, "Pikachu");
    printf("HP: %d\n", pikachu.hp);
    printf("Attack: %d\n", pikachu.attack);
    printf("Tier: %c\n", pikachu.tier);
    printf("Speed: %d\n", pikachu.speed);
    printf("Name: %s\n", pikachu.name);

    struct pokemon charizard ;
    charizard.hp = 150;
    charizard.attack = 120 ;
    charizard.tier = 'S' ;
    charizard.speed = 80 ;
    strcpy(charizard.name, "Charizard");
    printf("\nHP: %d\n", charizard.hp);
    printf("Attack: %d\n", charizard.attack);
    printf("Tier: %c\n", charizard.tier);
    printf("Speed: %d\n", charizard.speed);
    printf("Name: %s\n", charizard.name);


    struct pokemon charmander ;
    charmander.hp = 80;
    charmander.attack = 70 ;
    charmander.tier = 'B' ;
    charmander.speed = 90 ;
    strcpy(charmander.name, "Charmander");
    printf("\nHP: %d\n", charmander.hp);
    printf("Attack: %d\n", charmander.attack);
    printf("Tier: %c\n", charmander.tier);
    printf("Speed: %d\n", charmander.speed);
    printf("Name: %s\n", charmander.name);
    return 0;
}
