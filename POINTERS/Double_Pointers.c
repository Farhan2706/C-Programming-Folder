#include <stdio.h>

int main()
{
    int a = 5;

    int *x = &a;    // *   --> stores the address of variable 'a'
    int **y = &x;   // **  --> stores the address of pointer variable 'x'
    int ***z = &y;  // *** --> stores the address of pointer variable 'y'

    printf("%p\n%p\n", x, &a); // both represent the address of variable 'a'
    printf("%p\n%p\n", y, &x); // both represent the address of pointer variable 'x'
    printf("%p\n%p\n", z, &y); // both represent the address of pointer variable 'y'

    printf("%d\n%d\n%d\n", *x, **y, ***z); // all represent the value of variable 'a'

    return 0;
}