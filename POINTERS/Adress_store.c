#include <stdio.h>

int main()
{
    int a = 5;
    int b = 6;

    int* x = &a; // Stored Adress of Variable a.
    int* y = &b; // Stored Adress of Variable b.

    printf("%p\n",x); // Adres of Variable a.      // %p --> for printing Adress. 
    printf("%p\n",y); // Adress of Variable b.

    printf("%p\n",&a); // Adress of Variable a.
    printf("%p\n",&b); // Adress of Variable b.

    printf("%d\n",*x); // Value of Variable a. (because Adress of 'a' stored in 'x' variable)
    printf("%d\n",*y); // Value of Variable b. (because Adress of 'b' stored in 'y' variable)

return 0;
} 