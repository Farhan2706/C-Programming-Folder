#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct Pokemon
    {
        char name[30];
        int hp;
        int attack;
        int defence;
    } Pokemon;

    typedef struct LegendaryPokemon
    {
        Pokemon Basic;
        char special_ability[30];
    } LegendaryPokemon;

    typedef struct GodPokemon
    {
        LegendaryPokemon Legend;
        int special_attack;
    } GodPokemon;

    GodPokemon God;
    strcpy(God.Legend.Basic.name, "Arceus");
    God.Legend.Basic.hp = 120;
    God.Legend.Basic.attack = 120;
    God.Legend.Basic.defence = 120;
    strcpy(God.Legend.special_ability, "Turns anyone to Stone");
    God.special_attack = 120;

    printf("Name : %s\n", God.Legend.Basic.name);
    printf("Hp : %d\n", God.Legend.Basic.hp);
    printf("Attack : %d\n", God.Legend.Basic.attack);
    printf("Defence : %d\n", God.Legend.Basic.defence);
    printf("Special Ability : %s\n", God.Legend.special_ability);
    printf("Special Attack : %d\n", God.special_attack);

    return 0;
}