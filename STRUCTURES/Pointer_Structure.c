#include <stdio.h>
typedef struct pokemon{
    char name[30];
    int hp;
    int attack;
    int defence;
} pokemon;

int main() {

    pokemon a;
    strcpy(a.name,"Pikachu");
    a.hp = 85;
    a.attack = 70;
    a.defence = 60;

    pokemon* x = &a;
    pokemon* b = a.name;
    pokemon* c = &a.attack;
    pokemon* d = &a.defence;

    printf("%p\n",x); //Pointer to structure.
    printf("%p\n",b); //Pointer to first character of name 
    printf("%p\n",c);
    printf("%p\n",d);


    return 0;
}