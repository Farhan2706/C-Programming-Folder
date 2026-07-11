#include <stdio.h>

int main() {

    struct pokemon{
        int attack;
        int defence;
        int hp;
        int speed;
        char grade;
    };
    struct pokemon pikachu;
        pikachu.attack = 130;
        pikachu.defence = 80;
        pikachu.hp = 95;
        pikachu.speed = 100;
        pikachu.grade = 'S';

    struct pokemon charizard;
        charizard.attack = 110;
        charizard.defence = 90;
        charizard.hp = 75;
        charizard.speed = 80;
        charizard.grade = 'A';

    struct pokemon Mewtwo;
        Mewtwo.attack = 90;
        Mewtwo.defence = 100;
        Mewtwo.hp = 77;
        Mewtwo.speed = 100;
        Mewtwo.grade = 'B';
        

    return 0;
}