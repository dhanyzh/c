#include <stdio.h>
#include <string.h>
struct pokemon {
    int hp ;
    int attack ;
    char tier;
    int speed ;
    char name[20] ;
}pokemon;
int main() {
    struct pokemon pikachu[3];
    for (int i = 0; i < 3; i++) {
        printf("\nEnter name of pokemon[%d]: ", i );
        scanf("%s", pikachu[i].name);
        printf("Enter HP[%d]:", i);
        scanf("%d", &pikachu[i].hp);
        printf("Enter Attack[%d]: ", i);
        scanf("%d", &pikachu[i].attack);
        printf("Enter Tier[%d]: ", i);
        scanf(" %c", &pikachu[i].tier);
        printf("Enter Speed[%d]: ", i);
        scanf("%d", &pikachu[i].speed);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("\nName: %s\n", pikachu[i].name);
        printf("HP: %d\n", pikachu[i].hp);
        printf("Attack: %d\n", pikachu[i].attack);
        printf("Tier: %c\n", pikachu[i].tier);
        printf("Speed: %d\n\n", pikachu[i].speed);
    }
    return 0;
}