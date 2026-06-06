#include <stdio.h>
int factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    int fact = x * factorial(x - 1);
    return fact;
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("%d", fact);

    return 0;
}