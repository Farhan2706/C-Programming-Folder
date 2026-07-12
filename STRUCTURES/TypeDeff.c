#include <stdio.h>
#include <string.h>

int main() {

    typedef struct Book{   // typedef is used to give an alternative name (alias) to an existing data type.
        char name[50];
        float price;
        int pages;
    }Book; // this is alternative name of struct Book --> Book.

    Book a;
    strcpy(a.name,"The Alchemist");
    a.price = 259.99;
    a.pages = 555;

    printf("Name : %s\n",a.name);
    printf("Price : %.2f\n",a.price);
    printf("Pages : %d\n",a.pages);

    return 0;
}

// #include <stdio.h>
// typedef int integer;  // here int --> integer(alternate name of int data type)
// typedef float decimal; // flaot --> decimal 

// int main() {

//     integer x = 5;
//     decimal y = 3.1415;

//     printf("%d\n%f\n",x,y);

//     return 0;
// }