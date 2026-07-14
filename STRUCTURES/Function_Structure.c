#include <stdio.h>
#include <string.h>

typedef struct pokemon
{
    char name[30];
    int hp;
    int attack;
    int defence;
} pokemon;

void fun(pokemon x)
{
    printf("\nName : %s\n", x.name);
    printf("Hp : %d\n", x.hp);
    printf("Attack : %d\n", x.attack);
    printf("Defence : %d\n", x.defence);
    return;
}

int main()
{
    pokemon a,b;
    strcpy(a.name, "Pikachu");
    a.hp = 60;
    a.attack = 45;
    a.defence = 55;
    fun(a);

    b = a;
    strcpy(b.name,"Charizard");
    fun(b);

    return 0;
}