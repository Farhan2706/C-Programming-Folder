#include <stdio.h>
#include <string.h>

int main (){

    typedef struct pokemon{
        char name[20];
        int hp;
        int attact;
        int defence;
        int speed;
    }Pokemon;

    Pokemon arr[3];
    strcpy(arr[0].name,"Pikachu");
    arr[0].hp = 35;
    arr[0].attact = 55;
    arr[0].defence = 40;
    arr[0].speed = 90;

    strcpy(arr[1].name,"Charizard");
    arr[1].hp = 78;
    arr[1].attact = 84;
    arr[1].defence = 78;
    arr[1].speed = 100;

    strcpy(arr[2].name,"Mewtwo");
    arr[2].hp = 106;
    arr[2].attact = 110;
    arr[2].defence = 90;
    arr[2].speed = 130;

    for(int i = 0; i <= 2; i++){
        printf("\nName : %s\n",arr[i].name);
        printf("Hp : %d\n",arr[i].hp);
        printf("Attack : %d\n",arr[i].attact);
        printf("Defence : %d\n",arr[i].defence);
        printf("Speed : %d\n",arr[i].speed);
    }
    
    return 0;
}