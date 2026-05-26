#include <stdio.h>

int main()
{
    int n, fib, a, b;
    printf("Enter a Number : ");
    scanf("%d", &n);

    a = 1;
    b = 1;

    fib = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n == 1 || n == 2)
        {
            fib = 1;
        }
        a = b;
        b = fib;
        fib = a + b;
        printf("The fibonacci of %d is %d\n", i, fib);
    }
    return 0;
}