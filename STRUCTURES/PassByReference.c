#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    char name[30];
    int attack;
    int defence;
    int hp;
} pokemon;

void change(pokemon *x)  // Pass by Reference
{
    strcpy((*x).name, "Raichu");
    (*x).attack = 100;
    (*x).defence = 120;
    (*x).hp = 130;
}

int main()
{
    pokemon p;
    strcpy(p.name, "Pikachu");
    p.attack = 80;
    p.defence = 70;
    p.hp = 65;

    printf("\nName : %s\n", p.name);
    printf("Attack : %d\n", p.attack);
    printf("Defence : %d\n", p.defence);
    printf("Hp : %d\n", p.hp);

    change(&p);

    printf("\nName : %s\n", p.name);
    printf("Attack : %d\n", p.attack);
    printf("Defence : %d\n", p.defence);
    printf("Hp : %d\n", p.hp);

    return 0;
}