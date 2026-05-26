#include <stdio.h>

int main()
{
    int base, b, exp;
    printf("Enter Exponent of Base 2 : ");
    scanf("%d", &b);

    base = 2;
    exp = 1;
    for (int i = 1; i <= b; i++)
    {
        exp = exp * base;
        printf("%d raised to the power %d = %d\n", base, i, exp);
    }
    
    return 0;
}