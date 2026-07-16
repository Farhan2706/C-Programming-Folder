#include <stdio.h> 
#include <string.h>

typedef struct pokemon{
    char name[30];
    int attack;
    int defence;
    int hp;
} pokemon;

void change(pokemon* p){
    strcpy(p->name,"Arceus");  //'(*p).'  -->  'p->' other way
    p->attack = 120;  //structure pointer
    p->defence = 120;
    p->hp = 120;
}

int main() {

    pokemon a;
    strcpy(a.name,"Mewtwo");
    a.attack = 85;
    a.defence = 75;
    a.hp = 100;

    printf("\nName : %s\n",a.name);
    printf("Attack : %d\n",a.attack);
    printf("Defence : %d\n",a.defence);
    printf("Hp : %d\n",a.hp);

    change(&a);

    printf("\nName : %s\n",a.name);
    printf("Attack : %d\n",a.attack);
    printf("Defence : %d\n",a.defence);
    printf("Hp : %d\n",a.hp);

    return 0;
}