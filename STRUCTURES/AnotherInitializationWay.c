#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    char name[30];
    int attack;
    int defence;
    int hp;
} pokemon;

int main()
{

    pokemon a = {"Charizard", 55, 70, 65}; // Initialize a structure variable

    // strcpy(a.name,"Charizard");
    // a.attack = 55;
    // a.defence = 70;  //above is an alternative way to initialize the structure variable
    // a.hp = 65;

    printf("\nName : %s\n", a.name);
    printf("Attack : %d\n", a.attack);
    printf("Defence : %d\n", a.defence);
    printf("Hp : %d\n", a.hp);

    return 0;
}