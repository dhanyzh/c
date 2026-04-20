#include <stdio.h>
#include <string.h>

//global declaration of structure
typedef struct pokemon{
    int hp;
    int speed;
    char tier;
    char name[20];
}pokemon;

void change(pokemon *p){
    p->hp = 200;
    p->speed = 100;
    p->tier = 'S';
    strcpy(p->name, "Charizard");

    printf("HP: %d\n", p->hp);
    printf("Speed: %d\n", p->speed);
    printf("Tier: %c\n", p->tier);
    printf("Name: %s\n", p->name);
}

int main(){
    pokemon pikachu;
    pikachu.hp = 100;
    pikachu.speed = 50;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");

    change(&pikachu);
    return 0;
}