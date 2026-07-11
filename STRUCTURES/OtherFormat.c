#include <stdio.h>

int main() {

    struct pokemon{
        int attack;
        int defence;
        int hp;
        int speed;
        char grade;
    } pikachu, charizard, mewtwo;
   
        pikachu.attack = 130;
        pikachu.defence = 80;
        pikachu.hp = 95;
        pikachu.speed = 100;
        pikachu.grade = 'S';

        printf("\nPikachu : \n");
        printf("Attack : %d\n",pikachu.attack);
        printf("Defence : %d\n",pikachu.defence);
        printf("Hp : %d\n",pikachu.hp);
        printf("Speed : %d\n",pikachu.speed);
        printf("Grade : %c\n",pikachu.grade);


        charizard.attack = 110;
        charizard.defence = 90;
        charizard.hp = 75;
        charizard.speed = 80;
        charizard.grade = 'A';

        printf("\nCharizard : \n");
        printf("Attack : %d\n",charizard.attack);
        printf("Defence : %d\n",charizard.defence);
        printf("Hp : %d\n",charizard.hp);
        printf("Speed : %d\n",charizard.speed);
        printf("Grade : %c\n",charizard.grade);

        mewtwo.attack = 90;
        mewtwo.defence = 100;
        mewtwo.hp = 77;
        mewtwo.speed = 100;
        mewtwo.grade = 'B';

        printf("\nMewtwo : \n");
        printf("Attack : %d\n",mewtwo.attack);
        printf("Defencec: %d\n",mewtwo.defence);
        printf("Hp : %d\n",mewtwo.hp);
        printf("Speed : %d\n",mewtwo.speed);
        printf("Grade : %c\n",mewtwo.grade);
        

    return 0;
}