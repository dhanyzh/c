#include <stdio.h>
#include <string.h>

struct pokemon {
    int hp;
    int attack;
    char tier;
    int speed;
    char name[20];
}; pokemon;

typedef struct legendaryPokemon {
    struct pokemon base;
    char ability[50];
    int specialAttack;
} LegendaryPokemon;
int main() {
    LegendaryPokemon mewtwo;
    mewtwo.specialAttack = 300;
    mewtwo.base.attack = 120;
    mewtwo.base.hp = 80;
    mewtwo.base.tier = 'y';
    mewtwo.base.speed = 100;
    strcpy(mewtwo.base.name, "Mewtwo");
    return 0;
}