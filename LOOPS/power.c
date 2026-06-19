#include <stdio.h>

int main()
{
    int a, b, exp;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter Exponent : ");
    scanf("%d", &b);

    exp = 1;
    for (int i = 1; i <= b; i++)
    {
        exp = exp * a;
    }
    printf("%d raised to the power %d = %d", a, b, exp);
    return 0;
}