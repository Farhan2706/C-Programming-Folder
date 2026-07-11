#include <stdio.h>
#include <string.h>

int main() {

    struct book{
        char name[50];
        float price;
        int pages;
    } a,b,c;

    strcpy(a.name,"Secret Seven");
    a.price = 499.50;
    a.pages = 750;

    printf("\nBook 1 : \n");
    printf("Name : %s\n",a.name);
    printf("Price : %.2f\n",a.price);
    printf("Pages : %d\n",a.pages);


    strcpy(b.name,"Famous Five");
    b.price = 750.80;
    b.pages = 800;

    printf("\nBook 2 : \n");
    printf("Name : %s\n",b.name);
    printf("Price : %.2f\n",b.price);
    printf("Pages : %d\n",b.pages);


    strcpy(c.name,"The Alchemist");
    c.price = 399.99;
    c.pages = 600;

    printf("\nBook 3 : \n");
    printf("Name : %s\n",c.name);
    printf("Price : %.2f\n",c.price);
    printf("Pages : %d\n",c.pages);

    return 0;
}