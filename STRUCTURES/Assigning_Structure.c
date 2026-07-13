#include <stdio.h>
#include <string.h>

int main() {

    typedef struct pokemon{
        char name[30];
        int hp;
        int attack;
        int defence;
    }pokemon;
    pokemon a,b,c;
    strcpy(a.name,"Pikachu");
    a.hp = 70;
    a.attack = 65;
    a.defence = 80;

    // strcpy(b.name,"Mewtwo");
    // b.hp = 100;
    // b.attack = 110;
    // b.defence= 90;

    b = a; // Copy all members of structure 'a' into 'b'

    b.defence = 60; // Modify the copied structure

    printf("Attack : %d\n",b.attack);
    printf("Defence : %d\n",b.defence);

    return 0;
}